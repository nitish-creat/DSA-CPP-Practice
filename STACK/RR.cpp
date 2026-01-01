#include <bits/stdc++.h>
using namespace std;

/*
Quantum Chess Tournament Scheduler
-----------------------------------
Goal:
    Generate a round-robin schedule for N players.
    Each player has a quantum rating.
    Decoherence between players i and j = |rating[i] - rating[j]|

Objective:
    Arrange matches to minimize total decoherence per round.
*/

struct Player {
    int id;
    int rating;
};

// Compute decoherence between two players
int decoherence(Player a, Player b) {
    return abs(a.rating - b.rating);
}

int main() {
    int N;
    cout << "Enter number of players: ";
    cin >> N;

    vector<Player> players(N);
    cout << "Enter ratings of players:\n";
    for (int i = 0; i < N; i++) {
        players[i].id = i + 1;
        cin >> players[i].rating;
    }

    // ROUND ROBIN USING CIRCLE METHOD
    vector<Player> arr = players;

    if (N % 2 == 1) {
        arr.push_back({-1, -1}); // dummy player for odd N
        N++;
    }

    int rounds = N - 1;
    vector<vector<pair<int,int>>> schedule(rounds);

    for (int r = 0; r < rounds; r++) {
        for (int i = 0; i < N/2; i++) {
            Player p1 = arr[i];
            Player p2 = arr[N-1-i];

            if (p1.id != -1 && p2.id != -1)
                schedule[r].push_back({p1.id, p2.id});
        }

        // Rotate players for next round
        Player temp = arr[N-1];
        for (int i = N-1; i > 1; i--)
            arr[i] = arr[i-1];
        arr[1] = temp;
    }

    // Evaluate decoherence per round
    vector<int> decoherenceCost(rounds, 0);

    for (int r = 0; r < rounds; r++) {
        int cost = 0;
        for (auto &match : schedule[r]) {
            Player A = players[match.first - 1];
            Player B = players[match.second - 1];

            cost += decoherence(A, B);
        }
        decoherenceCost[r] = cost;
    }

    // OUTPUT
    cout << "\n===== QUANTUM TOURNAMENT SCHEDULE =====\n";
    for (int r = 0; r < rounds; r++) {
        cout << "\nRound " << r + 1 << ":\n";
        for (auto &m : schedule[r]) {
            cout << "Player " << m.first << " vs Player " << m.second;
            cout << "   (Decoherence = "
                 << decoherence(players[m.first-1], players[m.second-1])
                 << ")\n";
        }
        cout << "Total Decoherence in this round = " << decoherenceCost[r] << "\n";
    }

    // Total decoherence of tournament
    int total = accumulate(decoherenceCost.begin(), decoherenceCost.end(), 0);

    cout << "\n========================================";
    cout << "\nTOTAL QUANTUM DECOHERENCE = " << total << "\n";
    cout << "========================================\n";

    return 0;
}



//THE QUANTUM CHESS GRANDMASTER'S TOURNAMENT

//GM LUNA ORGANISE A TOURNAMENT WITH N PLAYERS USING QUANTUM CHESS RULES IN QUANTUM CHESS, PIECES CAN EXIST IN SUPERPOSTION STATES AND MOVES CAN BE "ENTANGLED" ACROSS MULTIPLE BOARD POSITIONS THE ROUNAMENT HAS

// 1. ROUND ROBIN FORMAT WHERE EACH PLAYER PLAY EVERYONE ELSE
// 2. QUANTUM INTERFERENCE EFFECTS BETWEEN SIMULTANEUOUSLY GAMES
// 3. OBERSRVATION EVENTS THAT COLLAPSE SUPERPOSITIONS
// 4. TIME CONTROL VERIATIONS BASED ON QUANTUM COMPLEXITY


// PROBLEM
// DESIGN THE OPTIMAL TOUNAMENT SCHEDULE THAT MINIMIZES TOTAL QUANTUM DECOHRENCE WHILE MAXIMIZING COMPETATIVE FAIRNESS PLAYERS HAVE DIFFERENT "QUANTUM RATINGS" THAT AFFECT THEIR ABILITY TO MAINTAIN SUPERPOSITION STATES. SOME PLAYERS PANNINGS CREATE "RESONANCE PATTERNS" THAT AMPLIFY OR CANCEL QUANTUM EFFECTS


// TOURNAMENT SHEDULE
// YOU MUST ARRANGE ALL THE MATCHES IN A WAY WHERE THE LEAST PRESENT LAYERS PAYS THE BIGGEST SUPERPOSTION TRUST
// DANGEROUS MATCH COMBINATION DO NOT MATCH SIMULTANEOUSLY
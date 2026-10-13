# Graph-Algorithm-Practice

My solutions to graph algorithm practice problems, organized by topic.

**Progress: 30 / 313 solved**

Folder naming: `<Topic>/<Judge>-<ProblemID>-<Problem-Name>/`

## Topics

| Topic | Solved |
|-------|--------|
| [BFS](#bfs) | 7 / 25 |
| [DFS](#dfs) | 0 / 39 |
| [Connected Components](#connected-components) | 1 / 3 |
| [Bridges](#bridges) | 0 / 11 |
| [Articulation Points](#articulation-points) | 0 / 4 |
| [SCC](#scc) | 4 / 21 |
| [Strong Orientation](#strong-orientation) | 0 / 1 |
| [Dijkstra](#dijkstra) | 1 / 38 |
| [Bellman-Ford](#bellman-ford) | 0 / 8 |
| [0-1 BFS](#0-1-bfs) | 1 / 10 |
| [Floyd-Warshall](#floyd-warshall) | 1 / 27 |
| [Second Best MST](#second-best-mst) | 0 / 1 |
| [MST Kruskal](#mst-kruskal) | 2 / 28 |
| [Kirchhoff Theorem](#kirchhoff-theorem) | 0 / 3 |
| [Prufer Code](#prufer-code) | 0 / 4 |
| [Finding Cycle](#finding-cycle) | 3 / 4 |
| [Negative Cycle](#negative-cycle) | 0 / 3 |
| [Eulerian Path](#eulerian-path) | 0 / 4 |
| [LCA](#lca) | 0 / 19 |
| [LCA Binary Lifting](#lca-binary-lifting) | 0 / 3 |
| [Max Flow Edmonds-Karp](#max-flow-edmonds-karp) | 0 / 6 |
| [Dinic](#dinic) | 0 / 1 |
| [Min-Cost Flow](#min-cost-flow) | 0 / 3 |
| [Bipartite Check](#bipartite-check) | 1 / 5 |
| [Kuhn Matching](#kuhn-matching) | 0 / 2 |
| [Hungarian](#hungarian) | 0 / 5 |
| [Topological Sort](#topological-sort) | 9 / 14 |
| [2-SAT](#2-sat) | 0 / 8 |
| [HLD](#hld) | 0 / 7 |
| [Centroid Decomposition](#centroid-decomposition) | 0 / 6 |

## BFS

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [Akbar The Great](http://spoj.com/problems/AKBAR) | SPOJ | ✅ | [Folder](./BFS/SPOJ-AKBAR-Akbar-The-Great) |
| 2 | [Minimum Knight Moves](http://www.spoj.com/problems/NAKANJ/) | SPOJ | ✅ | [Folder](./BFS/SPOJ-NAKANJ-Minimum-Knight-Moves) |
| 3 | [Water Among Cubes](http://www.spoj.com/problems/WATER) | SPOJ | ✅ | [Folder](./BFS/SPOJ-WATER-Water-Among-Cubes) |
| 4 | [Mice and Maze](http://www.spoj.com/problems/MICEMAZE/) | SPOJ | ✅ | [Folder](./BFS/SPOJ-MICEMAZE-Mice-and-Maze) |
| 5 | [Caravans](http://acm.timus.ru/problem.aspx?space=1&num=2034) | Timus | ⬜ | [Folder](./BFS/Timus-2034-Caravans) |
| 6 | [Holloween Party](http://web.archive.org/web/20200930162803/http://www.devskill.com/CodingProblems/ViewProblem/60) | DevSkill | ⬜ | [Folder](./BFS/DevSkill-60-Holloween-Party) |
| 7 | [Ohani And The Link Cut Tree](http://web.archive.org/web/20170216192002/http://devskill.com:80/CodingProblems/ViewProblem/150) | DevSkill | ⬜ | [Folder](./BFS/DevSkill-150-Ohani-And-The-Link-Cut-Tree) |
| 8 | [Spiky Mazes](http://www.spoj.com/problems/SPIKES/) | SPOJ | ✅ | [Folder](./BFS/SPOJ-SPIKES-Spiky-Mazes) |
| 9 | [Four Chips](http://www.spoj.com/problems/ADV04F1/) | SPOJ | ⬜ | [Folder](./BFS/SPOJ-ADV04F1-Four-Chips) |
| 10 | [Inversion Sort](http://www.spoj.com/problems/INVESORT/) | SPOJ | ⬜ | [Folder](./BFS/SPOJ-INVESORT-Inversion-Sort) |
| 11 | [Shortest Path](http://codeforces.com/contest/59/problem/E) | Codeforces | ⬜ | [Folder](./BFS/CF-59E-Shortest-Path) |
| 12 | [Yet Another Multiple Problem](http://www.spoj.com/problems/MULTII/) | SPOJ | ⬜ | [Folder](./BFS/SPOJ-MULTII-Yet-Another-Multiple-Problem) |
| 13 | [Binary 3xType Multiple](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2387) | UVA | ⬜ | [Folder](./BFS/UVA-11392-Binary-3xType-Multiple) |
| 14 | [KuPellaKeS](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1909) | UVA | ⬜ | [Folder](./BFS/UVA-10968-KuPellaKeS) |
| 15 | [Police Stations](http://codeforces.com/contest/796/problem/D) | Codeforces | ⬜ | [Folder](./BFS/CF-796D-Police-Stations) |
| 16 | [Okabe and City](http://codeforces.com/contest/821/problem/D) | Codeforces | ⬜ | [Folder](./BFS/CF-821D-Okabe-and-City) |
| 17 | [Find the Treasure](http://www.spoj.com/problems/DIGOKEYS/) | SPOJ | ⬜ | [Folder](./BFS/SPOJ-DIGOKEYS-Find-the-Treasure) |
| 18 | [Bear and Forgotten Tree 2](http://codeforces.com/contest/653/problem/E) | Codeforces | ⬜ | [Folder](./BFS/CF-653E-Bear-and-Forgotten-Tree-2) |
| 19 | [Cycle in Maze](http://codeforces.com/contest/769/problem/C) | Codeforces | ⬜ | [Folder](./BFS/CF-769C-Cycle-in-Maze) |
| 20 | [Flipping Frustration](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2287) | UVA | ⬜ | [Folder](./BFS/UVA-11312-Flipping-Frustration) |
| 21 | [Ada and Cycle](http://www.spoj.com/problems/ADACYCLE/) | SPOJ | ⬜ | [Folder](./BFS/SPOJ-ADACYCLE-Ada-and-Cycle) |
| 22 | [Labyrinth](https://cses.fi/problemset/task/1193) | CSES | ✅ | [Folder](./BFS/CSES-1193-Labyrinth) |
| 23 | [Message Route](https://cses.fi/problemset/task/1667/) | CSES | ✅ | [Folder](./BFS/CSES-1667-Message-Route) |
| 24 | [Monsters](https://cses.fi/problemset/task/1194) | CSES | ⬜ | [Folder](./BFS/CSES-1194-Monsters) |
| 25 | [Colour Hash](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=9&page=show_problem&problem=645) | UVA | ⬜ | [Folder](./BFS/UVA-704-Colour-Hash) |

## DFS

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [ABC Path](http://www.spoj.com/problems/ABCPATH/) | SPOJ | ⬜ | [Folder](./DFS/SPOJ-ABCPATH) |
| 2 | [Eagle and Dogs](http://www.spoj.com/problems/EAGLE1/) | SPOJ | ⬜ | [Folder](./DFS/SPOJ-EAGLE1-Eagle-and-Dogs) |
| 3 | [Kefa and Park](http://codeforces.com/problemset/problem/580/C) | Codeforces | ⬜ | [Folder](./DFS/CF-580C-Kefa-and-Park) |
| 4 | [Werewolf](http://acm.timus.ru/problem.aspx?space=1&num=1242) | Timus | ⬜ | [Folder](./DFS/Timus-1242-Werewolf) |
| 5 | [Penguin Avia](http://acm.timus.ru/problem.aspx?space=1&num=1709) | Timus | ⬜ | [Folder](./DFS/Timus-1709-Penguin-Avia) |
| 6 | [Two Teams](http://acm.timus.ru/problem.aspx?space=1&num=1106) | Timus | ⬜ | [Folder](./DFS/Timus-1106-Two-Teams) |
| 7 | [Ada and Island](http://www.spoj.com/problems/ADASEA/) | SPOJ | ⬜ | [Folder](./DFS/SPOJ-ADASEA-Ada-and-Island) |
| 8 | [The die is cast](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=598) | UVA | ⬜ | [Folder](./DFS/UVA-657-The-Die-is-Cast) |
| 9 | [Sheep](http://www.spoj.com/problems/KOZE/) | SPOJ | ⬜ | [Folder](./DFS/SPOJ-KOZE-Sheep) |
| 10 | [Path of the Rightenous Man](http://www.spoj.com/problems/RIOI_2_3/) | SPOJ | ⬜ | [Folder](./DFS/SPOJ-RIOI_2_3-Path-of-the-Rightenous-Man) |
| 11 | [Validate the Maze](http://www.spoj.com/problems/MAKEMAZE/) | SPOJ | ⬜ | [Folder](./DFS/SPOJ-MAKEMAZE-Validate-the-Maze) |
| 12 | [Ghosts having Fun](http://www.spoj.com/problems/GHOSTS/) | SPOJ | ⬜ | [Folder](./DFS/SPOJ-GHOSTS-Ghosts-Having-Fun) |
| 13 | [Underground Lab](http://codeforces.com/contest/781/problem/C) | Codeforces | ⬜ | [Folder](./DFS/CF-781C-Underground-Lab) |
| 14 | [Maze Tester](http://web.archive.org/web/20200319103915/https://www.devskill.com/CodingProblems/ViewProblem/3) | DevSkill | ⬜ | [Folder](./DFS/DevSkill-3-Maze-Tester) |
| 15 | [Tourist](http://web.archive.org/web/20190426175135/https://devskill.com/CodingProblems/ViewProblem/17) | DevSkill | ⬜ | [Folder](./DFS/DevSkill-17-Tourist) |
| 16 | [Anton and Tree](http://codeforces.com/contest/734/problem/E) | Codeforces | ⬜ | [Folder](./DFS/CF-734E-Anton-and-Tree) |
| 17 | [Transformation From A To B](http://codeforces.com/contest/727/problem/A) | Codeforces | ⬜ | [Folder](./DFS/CF-727A-Transformation-From-A-To-B) |
| 18 | [One Way Reform](http://codeforces.com/contest/723/problem/E) | Codeforces | ⬜ | [Folder](./DFS/CF-723E-One-Way-Reform) |
| 19 | [Centroids](http://codeforces.com/contest/709/problem/E) | Codeforces | ⬜ | [Folder](./DFS/CF-709E-Centroids) |
| 20 | [Generate a String](http://codeforces.com/contest/710/problem/E) | Codeforces | ⬜ | [Folder](./DFS/CF-710E-Generate-a-String) |
| 21 | [Broken Tree](http://codeforces.com/contest/758/problem/E) | Codeforces | ⬜ | [Folder](./DFS/CF-758E-Broken-Tree) |
| 22 | [Dasha and Puzzle](http://codeforces.com/contest/761/problem/E) | Codeforces | ⬜ | [Folder](./DFS/CF-761E-Dasha-and-Puzzle) |
| 23 | [Making genome In Berland](http://codeforces.com/contest/638/problem/B) | Codeforces | ⬜ | [Folder](./DFS/CF-638B-Making-Genome-In-Berland) |
| 24 | [Road Improvement](http://codeforces.com/contest/638/problem/C) | Codeforces | ⬜ | [Folder](./DFS/CF-638C-Road-Improvement) |
| 25 | [Garland](http://codeforces.com/contest/767/problem/C) | Codeforces | ⬜ | [Folder](./DFS/CF-767C-Garland) |
| 26 | [Labeling Cities](http://codeforces.com/contest/794/problem/D) | Codeforces | ⬜ | [Folder](./DFS/CF-794D-Labeling-Cities) |
| 27 | [Send the Fool Further!](http://codeforces.com/contest/802/problem/J1) | Codeforces | ⬜ | [Folder](./DFS/CF-802J1-Send-the-Fool-Further) |
| 28 | [The tag Game](http://codeforces.com/contest/813/problem/C) | Codeforces | ⬜ | [Folder](./DFS/CF-813C-The-Tag-Game) |
| 29 | [Leha and Another game about graphs](http://codeforces.com/contest/841/problem/D) | Codeforces | ⬜ | [Folder](./DFS/CF-841D-Leha-and-Another-Game-About-Graphs) |
| 30 | [Shortest path problem](http://codeforces.com/contest/845/problem/G) | Codeforces | ⬜ | [Folder](./DFS/CF-845G-Shortest-Path-Problem) |
| 31 | [Upgrading Tree](http://codeforces.com/contest/844/problem/E) | Codeforces | ⬜ | [Folder](./DFS/CF-844E-Upgrading-Tree) |
| 32 | [From Y to Y](http://codeforces.com/contest/849/problem/C) | Codeforces | ⬜ | [Folder](./DFS/CF-849C-From-Y-to-Y) |
| 33 | [Chemistry in Berland](http://codeforces.com/contest/846/problem/E) | Codeforces | ⬜ | [Folder](./DFS/CF-846E-Chemistry-in-Berland) |
| 34 | [Wizards Tour](http://codeforces.com/contest/861/problem/F) | Codeforces | ⬜ | [Folder](./DFS/CF-861F-Wizards-Tour) |
| 35 | [Ring Road](http://codeforces.com/contest/24/problem/A) | Codeforces | ⬜ | [Folder](./DFS/CF-24A-Ring-Road) |
| 36 | [Mail Stamps](http://codeforces.com/contest/29/problem/C) | Codeforces | ⬜ | [Folder](./DFS/CF-29C-Mail-Stamps) |
| 37 | [Ant on the Tree](http://codeforces.com/contest/29/problem/D) | Codeforces | ⬜ | [Folder](./DFS/CF-29D-Ant-on-the-Tree) |
| 38 | [Cactus](http://www.spoj.com/problems/CAC/) | SPOJ | ⬜ | [Folder](./DFS/SPOJ-CAC-Cactus) |
| 39 | [Mixing Chemicals](http://www.spoj.com/problems/AMR10J/) | SPOJ | ⬜ | [Folder](./DFS/SPOJ-AMR10J-Mixing-Chemicals) |

## Connected Components

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [CT23E](http://www.spoj.com/problems/CT23E/) | SPOJ | ⬜ | [Folder](./Connected-Components/SPOJ-CT23E) |
| 2 | [GERALD07](https://www.codechef.com/MARCH14/problems/GERALD07) | CodeChef | ⬜ | [Folder](./Connected-Components/CodeChef-GERALD07) |
| 3 | [Building Roads](https://cses.fi/problemset/task/1666) | CSES | ✅ | [Folder](./Connected-Components/CSES-1666-Building-Roads) |

## Bridges

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [Critical Links](http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=737) | UVA | ⬜ | [Folder](./Bridges/UVA-796-Critical-Links) |
| 2 | [Street Directions](http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=551) | UVA | ⬜ | [Folder](./Bridges/UVA-610-Street-Directions) |
| 3 | [Case of the Computer Network](http://codeforces.com/problemset/problem/555/E) | Codeforces | ⬜ | [Folder](./Bridges/CF-555E-Case-of-the-Computer-Network) |
| 4 | [Hedge Mazes](https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=3785) | UVA | ⬜ | [Folder](./Bridges/UVA-12363-Hedge-Mazes) |
| 5 | [Network](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=251) | UVA | ⬜ | [Folder](./Bridges/UVA-315-Network) |
| 6 | [Computer Network](http://codeforces.com/gym/100114) | Codeforces Gym | ⬜ | [Folder](./Bridges/CF-Gym-100114J-Computer-Network) |
| 7 | [King Graffs Defense](http://www.spoj.com/problems/GRAFFDEF/) | SPOJ | ⬜ | [Folder](./Bridges/SPOJ-GRAFFDEF-King-Graffs-Defense) |
| 8 | [Critical Edges](http://www.spoj.com/problems/EC_P/) | SPOJ | ⬜ | [Folder](./Bridges/SPOJ-EC_P-Critical-Edges) |
| 9 | [Break Up](http://codeforces.com/contest/700/problem/C) | Codeforces | ⬜ | [Folder](./Bridges/CF-700C-Break-Up) |
| 10 | [Tourist Reform](http://codeforces.com/contest/732/problem/F) | Codeforces | ⬜ | [Folder](./Bridges/CF-732F-Tourist-Reform) |
| 11 | [Non-academic problem](https://codeforces.com/contest/1986/problem/F) | Codeforces | ⬜ | [Folder](./Bridges/CF-1986F-Non-Academic-Problem) |

## Articulation Points

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [Tourist Guide](http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=13&page=show_problem&problem=1140) | UVA | ⬜ | [Folder](./Articulation-Points/UVA-10199-Tourist-Guide) |
| 2 | [Network](http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=5&page=show_problem&problem=251) | UVA | ⬜ | [Folder](./Articulation-Points/UVA-315-Network) |
| 3 | [Submerging Islands](http://www.spoj.com/problems/SUBMERGE/) | SPOJ | ⬜ | [Folder](./Articulation-Points/SPOJ-SUBMERGE-Submerging-Islands) |
| 4 | [Cutting Figure](https://codeforces.com/problemset/problem/193/A) | Codeforces | ⬜ | [Folder](./Articulation-Points/CF-193A-Cutting-Figure) |

## SCC

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [Good Travels](http://www.spoj.com/problems/GOODA/) | SPOJ | ⬜ | [Folder](./SCC/SPOJ-GOODA-Good-Travels) |
| 2 | [LEGO](http://www.spoj.com/problems/LEGO/) | SPOJ | ⬜ | [Folder](./SCC/SPOJ-LEGO) |
| 3 | [Chef and Round Run](https://www.codechef.com/AUG16/problems/CHEFRRUN) | CodeChef | ⬜ | [Folder](./SCC/CodeChef-CHEFRRUN-Chef-and-Round-Run) |
| 4 | [Come and Go](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2938) | UVA | ⬜ | [Folder](./SCC/UVA-11838-Come-and-Go) |
| 5 | [Calling Circles](https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=183) | UVA | ⬜ | [Folder](./SCC/UVA-247-Calling-Circles) |
| 6 | [Prove Them All](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4955) | UVA | ⬜ | [Folder](./SCC/UVA-13057-Prove-Them-All) |
| 7 | [Water Supply](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4393) | UVA | ⬜ | [Folder](./SCC/UVA-12645-Water-Supply) |
| 8 | [Lighting Away](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2870) | UVA | ⬜ | [Folder](./SCC/UVA-11770-Lighting-Away) |
| 9 | [Trouble in Terrorist Town](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=862&page=show_problem&problem=4805) | UVA | ⬜ | [Folder](./SCC/UVA-12926-Trouble-in-Terrorist-Town) |
| 10 | [The Largest Clique](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2299) | UVA | ⬜ | [Folder](./SCC/UVA-11324-The-Largest-Clique) |
| 11 | [Trust groups](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2756) | UVA | ⬜ | [Folder](./SCC/UVA-11709-Trust-Groups) |
| 12 | [Wishmaster](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4598) | UVA | ⬜ | [Folder](./SCC/UVA-12745-Wishmaster) |
| 13 | [True Friends](http://www.spoj.com/problems/TFRIENDS/) | SPOJ | ⬜ | [Folder](./SCC/SPOJ-TFRIENDS-True-Friends) |
| 14 | [Capital City](http://www.spoj.com/problems/CAPCITY/) | SPOJ | ⬜ | [Folder](./SCC/SPOJ-CAPCITY-Capital-City) |
| 15 | [Scheme](http://codeforces.com/contest/22/problem/E) | Codeforces | ⬜ | [Folder](./SCC/CF-22E-Scheme) |
| 16 | [Ada and Panels](http://www.spoj.com/problems/ADAPANEL/) | SPOJ | ⬜ | [Folder](./SCC/SPOJ-ADAPANEL-Ada-and-Panels) |
| 17 | [Flight Routes Check](https://cses.fi/problemset/task/1682) | CSES | ✅ | [Folder](./SCC/CSES-1682-Flight-Routes-Check) |
| 18 | [Planets and Kingdoms](https://cses.fi/problemset/task/1683) | CSES | ✅ | [Folder](./SCC/CSES-1683-Planets-and-Kingdoms) |
| 19 | [Coin Collector](https://cses.fi/problemset/task/1686) | CSES | ✅ | [Folder](./SCC/CSES-1686-Coin-Collector) |
| 20 | [Checkposts](https://codeforces.com/problemset/problem/427/C) | Codeforces | ⬜ | [Folder](./SCC/CF-427C-Checkposts) |
| 21 | [Longest Cycle in a Graph](https://leetcode.com/problems/longest-cycle-in-a-graph/) | LeetCode | ✅ | [Folder](./SCC/LeetCode-Longest-Cycle-in-a-Graph) |

## Strong Orientation

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [Osiedla](https://szkopul.edu.pl/problemset/problem/nldsb4EW1YuZykBlf4lcZL1Y/site/) | POI | ⬜ | [Folder](./Strong-Orientation/POI-Osiedla) |

## Dijkstra

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [Ivan's Car](http://acm.timus.ru/problem.aspx?space=1&num=1930) | Timus | ⬜ | [Folder](./Dijkstra/Timus-1930-Ivans-Car) |
| 2 | [Sightseeing Trip](http://acm.timus.ru/problem.aspx?space=1&num=1004) | Timus | ⬜ | [Folder](./Dijkstra/Timus-1004-Sightseeing-Trip) |
| 3 | [The Shortest Path](http://www.spoj.com/problems/SHPATH/) | SPOJ | ⬜ | [Folder](./Dijkstra/SPOJ-SHPATH-The-Shortest-Path) |
| 4 | [Dijkstra?](http://codeforces.com/problemset/problem/20/C) | Codeforces | ⬜ | [Folder](./Dijkstra/CF-20C-Dijkstra) |
| 5 | [Shortest Path](http://codeforces.com/problemset/problem/59/E) | Codeforces | ⬜ | [Folder](./Dijkstra/CF-59E-Shortest-Path) |
| 6 | [Jzzhu and Cities](http://codeforces.com/problemset/problem/449/B) | Codeforces | ⬜ | [Folder](./Dijkstra/CF-449B-Jzzhu-and-Cities) |
| 7 | [The Classic Problem](http://codeforces.com/problemset/problem/464/E) | Codeforces | ⬜ | [Folder](./Dijkstra/CF-464E-The-Classic-Problem) |
| 8 | [President and Roads](http://codeforces.com/problemset/problem/567/E) | Codeforces | ⬜ | [Folder](./Dijkstra/CF-567E-President-and-Roads) |
| 9 | [Complete The Graph](http://codeforces.com/problemset/problem/715/B) | Codeforces | ⬜ | [Folder](./Dijkstra/CF-715B-Complete-The-Graph) |
| 10 | [SkiResorts](https://community.topcoder.com/stat?c=problem_statement&pm=12468) | TopCoder | ⬜ | [Folder](./Dijkstra/TopCoder-SkiResorts) |
| 11 | [MaliciousPath](https://community.topcoder.com/stat?c=problem_statement&pm=13596) | TopCoder | ⬜ | [Folder](./Dijkstra/TopCoder-MaliciousPath) |
| 12 | [Ada and Trip](http://www.spoj.com/problems/ADATRIP/) | SPOJ | ⬜ | [Folder](./Dijkstra/SPOJ-ADATRIP-Ada-and-Trip) |
| 13 | [Here We Go(relians) Again](https://vjudge.net/problem/UVALive-3850) | UVA Live Archive | ⬜ | [Folder](./Dijkstra/LA-3850-Here-We-Go-Relians-Again) |
| 14 | [Destination Unknown](http://codeforces.com/gym/100625) | Codeforces Gym | ⬜ | [Folder](./Dijkstra/CF-Gym-100625D-Destination-Unknown) |
| 15 | [Even Obsession](https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=4829) | UVA | ⬜ | [Folder](./Dijkstra/UVA-12950-Even-Obsession) |
| 16 | [Journey to Grece](http://codeforces.com/gym/100753) | Codeforces Gym | ⬜ | [Folder](./Dijkstra/CF-Gym-100753A-Journey-to-Grece) |
| 17 | [Brain Fry](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=866&page=show_problem&problem=4918) | UVA | ⬜ | [Folder](./Dijkstra/UVA-13030-Brain-Fry) |
| 18 | [Toll](https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=3468) | UVA | ⬜ | [Folder](./Dijkstra/UVA-1027-Toll) |
| 19 | [Airport Setup](https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2372) | UVA | ⬜ | [Folder](./Dijkstra/UVA-11377-Airport-Setup) |
| 20 | [Dynamic Shortest Path](http://codeforces.com/problemset/problem/843/D) | Codeforces | ⬜ | [Folder](./Dijkstra/CF-843D-Dynamic-Shortest-Path) |
| 21 | [Shopping](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2913) | UVA | ⬜ | [Folder](./Dijkstra/UVA-11813-Shopping) |
| 22 | [Route Change](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=226&page=show_problem&problem=2933) | UVA | ⬜ | [Folder](./Dijkstra/UVA-11833-Route-Change) |
| 23 | [Easy Dijkstra Problem](http://www.spoj.com/problems/EZDIJKST/en/) | SPOJ | ⬜ | [Folder](./Dijkstra/SPOJ-EZDIJKST-Easy-Dijkstra-Problem) |
| 24 | [Cave Raider](https://vjudge.net/problem/UVALive-2819) | UVA Live Archive | ⬜ | [Folder](./Dijkstra/LA-2819-Cave-Raider) |
| 25 | [Almost Shortest Path](https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=3296) | UVA | ⬜ | [Folder](./Dijkstra/UVA-12144-Almost-Shortest-Path) |
| 26 | [Highest Paid Toll](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3198) | UVA | ⬜ | [Folder](./Dijkstra/UVA-12047-Highest-Paid-Toll) |
| 27 | [Batman](https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2509) | UVA | ⬜ | [Folder](./Dijkstra/UVA-11514-Batman) |
| 28 | [Team Rocket Rises Again](http://codeforces.com/contest/757/problem/F) | Codeforces | ⬜ | [Folder](./Dijkstra/CF-757F-Team-Rocket-Rises-Again) |
| 29 | [Minefield](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2313) | UVA | ⬜ | [Folder](./Dijkstra/UVA-11338-Minefield) |
| 30 | [Airport Express](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2369) | UVA | ⬜ | [Folder](./Dijkstra/UVA-11374-Airport-Express) |
| 31 | [Poor My Problem](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2038) | UVA | ⬜ | [Folder](./Dijkstra/UVA-11097-Poor-My-Problem) |
| 32 | [The music teacher](https://uva.onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=5083) | UVA | ⬜ | [Folder](./Dijkstra/UVA-13172-The-Music-Teacher) |
| 33 | [Dirty Arkady's Kitchen](http://codeforces.com/contest/827/problem/F) | Codeforces | ⬜ | [Folder](./Dijkstra/CF-827F-Dirty-Arkadys-Kitchen) |
| 34 | [Delivery Route](http://www.spoj.com/problems/DELIVER/) | SPOJ | ⬜ | [Folder](./Dijkstra/SPOJ-DELIVER-Delivery-Route) |
| 35 | [Costly Chess](http://www.spoj.com/problems/CCHESS/) | SPOJ | ⬜ | [Folder](./Dijkstra/SPOJ-CCHESS-Costly-Chess) |
| 36 | [Shortest Routes I](https://cses.fi/problemset/task/1671) | CSES | ✅ | [Folder](./Dijkstra/CSES-1671-Shortest-Routes-I) |
| 37 | [Flight Discount](https://cses.fi/problemset/task/1195) | CSES | ⬜ | [Folder](./Dijkstra/CSES-1195-Flight-Discount) |
| 38 | [Flight Routes](https://cses.fi/problemset/task/1196) | CSES | ⬜ | [Folder](./Dijkstra/CSES-1196-Flight-Routes) |

## Bellman-Ford

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [Ford-Bellman](https://www.e-olymp.com/en/problems/1453) | EOlymp | ⬜ | [Folder](./Bellman-Ford/EOlymp-1453-Ford-Bellman) |
| 2 | [MPI Maelstrom](http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=364) | UVA | ⬜ | [Folder](./Bellman-Ford/UVA-423-MPI-Maelstrom) |
| 3 | [Frogger](http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=7&page=show_problem&problem=475) | UVA | ⬜ | [Folder](./Bellman-Ford/UVA-534-Frogger) |
| 4 | [The Tourist Guide](http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=1040) | UVA | ⬜ | [Folder](./Bellman-Ford/UVA-10099-The-Tourist-Guide) |
| 5 | [King](http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=456) | UVA | ⬜ | [Folder](./Bellman-Ford/UVA-515-King) |
| 6 | [The Farnsworth Parabox](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3964) | UVA | ⬜ | [Folder](./Bellman-Ford/UVA-12519-The-Farnsworth-Parabox) |
| 7 | [High Score](https://cses.fi/problemset/task/1673) | CSES | ⬜ | [Folder](./Bellman-Ford/CSES-1673-High-Score) |
| 8 | [Cycle Finding](https://cses.fi/problemset/task/1197) | CSES | ⬜ | [Folder](./Bellman-Ford/CSES-1197-Cycle-Finding) |

## 0-1 BFS

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [Labyrinth](https://codeforces.com/contest/1063/problem/B) | Codeforces | ✅ | [Folder](./0-1-BFS/CF-1063B-Labyrinth) |
| 2 | [KATHTHI](http://www.spoj.com/problems/KATHTHI/) | SPOJ | ⬜ | [Folder](./0-1-BFS/SPOJ-KATHTHI) |
| 3 | [DoNotTurn](https://community.topcoder.com/stat?c=problem_statement&pm=10337) | TopCoder | ⬜ | [Folder](./0-1-BFS/TopCoder-DoNotTurn) |
| 4 | [Ocean Currents](https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2620) | UVA | ⬜ | [Folder](./0-1-BFS/UVA-11573-Ocean-Currents) |
| 5 | [Olya and Energy Drinks](https://codeforces.com/problemset/problem/877/D) | Codeforces | ⬜ | [Folder](./0-1-BFS/CF-877D-Olya-and-Energy-Drinks) |
| 6 | [Three States](https://codeforces.com/problemset/problem/590/C) | Codeforces | ⬜ | [Folder](./0-1-BFS/CF-590C-Three-States) |
| 7 | [Colliding Traffic](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2621) | UVA | ⬜ | [Folder](./0-1-BFS/UVA-11574-Colliding-Traffic) |
| 8 | [Chamber of Secrets](https://codeforces.com/problemset/problem/173/B) | Codeforces | ⬜ | [Folder](./0-1-BFS/CF-173B-Chamber-of-Secrets) |
| 9 | [Spiral Maximum](https://codeforces.com/problemset/problem/173/C) | Codeforces | ⬜ | [Folder](./0-1-BFS/CF-173C-Spiral-Maximum) |
| 10 | [Minimum Cost to Make at Least One Valid Path in a Grid](https://leetcode.com/problems/minimum-cost-to-make-at-least-one-valid-path-in-a-grid) | LeetCode | ⬜ | [Folder](./0-1-BFS/LeetCode-Minimum-Cost-to-Make-at-Least-One-Valid-Path-in-a-Grid) |

## Floyd-Warshall

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [Page Hopping](https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=762) | UVA | ⬜ | [Folder](./Floyd-Warshall/UVA-821-Page-Hopping) |
| 2 | [Possible Friends](http://www.spoj.com/problems/SOCIALNE/) | SPOJ | ⬜ | [Folder](./Floyd-Warshall/SPOJ-SOCIALNE-Possible-Friends) |
| 3 | [Greg and Graph](http://codeforces.com/problemset/problem/295/B) | Codeforces | ⬜ | [Folder](./Floyd-Warshall/CF-295B-Greg-and-Graph) |
| 4 | [106 miles to Chicago](http://www.spoj.com/problems/CHICAGO/) | SPOJ | ⬜ | [Folder](./Floyd-Warshall/SPOJ-CHICAGO-106-Miles-to-Chicago) |
| 5 | [Road Construction](https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1665) | UVA | ⬜ | [Folder](./Floyd-Warshall/UVA-10724-Road-Construction) |
| 6 | [The Postal Worker Rings Once](https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=53) | UVA | ⬜ | [Folder](./Floyd-Warshall/UVA-117-The-Postal-Worker-Rings-Once) |
| 7 | [Traveling Graph](http://codeforces.com/problemset/problem/21/D) | Codeforces | ⬜ | [Folder](./Floyd-Warshall/CF-21D-Traveling-Graph) |
| 8 | [The Geodetic Set Problem](https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=3639) | UVA | ⬜ | [Folder](./Floyd-Warshall/UVA-1198-The-Geodetic-Set-Problem) |
| 9 | [Audiophobia](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=989) | UVA | ⬜ | [Folder](./Floyd-Warshall/UVA-10048-Audiophobia) |
| 10 | [Numbering Paths](https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=61) | UVA | ⬜ | [Folder](./Floyd-Warshall/UVA-125-Numbering-Paths) |
| 11 | [Travel Company](http://lightoj.com/volume_showproblem.php?problem=1221) | LightOJ | ⬜ | [Folder](./Floyd-Warshall/LightOJ-1221-Travel-Company) |
| 12 | [MPI Maelstrom](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=364) | UVA | ⬜ | [Folder](./Floyd-Warshall/UVA-423-MPI-Maelstrom) |
| 13 | [Warfare And Logistics](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4162) | UVA | ⬜ | [Folder](./Floyd-Warshall/UVA-1416-Warfare-And-Logistics) |
| 14 | [USHER](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3674) | UVA | ⬜ | [Folder](./Floyd-Warshall/UVA-1233-USHER) |
| 15 | [The Orc Attack](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1734) | UVA | ⬜ | [Folder](./Floyd-Warshall/UVA-10793-The-Orc-Attack) |
| 16 | [The Tourist Guide](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1040) | UVA | ⬜ | [Folder](./Floyd-Warshall/UVA-10099-The-Tourist-Guide) |
| 17 | [Airline Comparison](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=810) | UVA | ⬜ | [Folder](./Floyd-Warshall/UVA-869-Airline-Comparison) |
| 18 | [Geonosis](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=5134) | UVA | ⬜ | [Folder](./Floyd-Warshall/UVA-13211-Geonosis) |
| 19 | [Defend the Rohan](http://www.spoj.com/problems/ROHAAN/) | SPOJ | ⬜ | [Folder](./Floyd-Warshall/SPOJ-ROHAAN-Defend-the-Rohan) |
| 20 | [Roads in Berland](http://codeforces.com/contest/25/problem/C) | Codeforces | ⬜ | [Folder](./Floyd-Warshall/CF-25C-Roads-in-Berland) |
| 21 | [String Problem](http://codeforces.com/contest/33/problem/B) | Codeforces | ⬜ | [Folder](./Floyd-Warshall/CF-33B-String-Problem) |
| 22 | [Manic Moving](http://codeforces.com/gym/101223) | Codeforces Gym | ⬜ | [Folder](./Floyd-Warshall/CF-Gym-101223C-Manic-Moving) |
| 23 | [Arbitrage](http://www.spoj.com/problems/ARBITRAG/) | SPOJ | ⬜ | [Folder](./Floyd-Warshall/SPOJ-ARBITRAG-Arbitrage) |
| 24 | [Randomly-priced Tickets](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3331) | UVA | ⬜ | [Folder](./Floyd-Warshall/UVA-12179-Randomly-Priced-Tickets) |
| 25 | [Jogging Trails](http://lightoj.com/volume_showproblem.php?problem=1086) | LightOJ | ⬜ | [Folder](./Floyd-Warshall/LightOJ-1086-Jogging-Trails) |
| 26 | [Ingredients](http://www.spoj.com/problems/INGRED/) | SPOJ | ⬜ | [Folder](./Floyd-Warshall/SPOJ-INGRED-Ingredients) |
| 27 | [Shortest Routes II](https://cses.fi/problemset/task/1672) | CSES | ✅ | [Folder](./Floyd-Warshall/CSES-1672-Shortest-Routes-II) |

## Second Best MST

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [Minimum spanning tree for each edge](https://codeforces.com/problemset/problem/609/E) | Codeforces | ⬜ | [Folder](./Second-Best-MST/CF-609E-Minimum-Spanning-Tree-for-Each-Edge) |

## MST Kruskal

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [KOICOST](http://www.spoj.com/problems/KOICOST/) | SPOJ | ⬜ | [Folder](./MST-Kruskal/SPOJ-KOICOST) |
| 2 | [MARYBMW](http://www.spoj.com/problems/MARYBMW/) | SPOJ | ⬜ | [Folder](./MST-Kruskal/SPOJ-MARYBMW) |
| 3 | [Fullmetal Alchemist](https://www.codechef.com/ICL2016/problems/ICL16A) | CodeChef | ⬜ | [Folder](./MST-Kruskal/CodeChef-ICL16A-Fullmetal-Alchemist) |
| 4 | [Edges in MST](http://codeforces.com/contest/160/problem/D) | Codeforces | ⬜ | [Folder](./MST-Kruskal/CF-160D-Edges-in-MST) |
| 5 | [Bring Your Own Horse](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3328) | UVA | ⬜ | [Folder](./MST-Kruskal/UVA-12176-Bring-Your-Own-Horse) |
| 6 | [ACM Contest and Blackout](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1541) | UVA | ⬜ | [Folder](./MST-Kruskal/UVA-10600-ACM-Contest-and-Blackout) |
| 7 | [Road Construction](https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1665) | UVA | ⬜ | [Folder](./MST-Kruskal/UVA-10724-Road-Construction) |
| 8 | [Roads in HackerLand](https://www.hackerrank.com/contests/june-world-codesprint/challenges/johnland/problem) | HackerRank | ⬜ | [Folder](./MST-Kruskal/HackerRank-Roads-in-HackerLand) |
| 9 | [Expensive subway](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2757) | UVA | ⬜ | [Folder](./MST-Kruskal/UVA-11710-Expensive-Subway) |
| 10 | [Chefland and Electricity](https://www.codechef.com/problems/CHEFELEC) | CodeChef | ⬜ | [Folder](./MST-Kruskal/CodeChef-CHEFELEC-Chefland-and-Electricity) |
| 11 | [Killing Aliens in Borg Maze](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1248) | UVA | ⬜ | [Folder](./MST-Kruskal/UVA-10307-Killing-Aliens-in-Borg-Maze) |
| 12 | [Flea](http://codeforces.com/problemset/problem/32/C) | Codeforces | ⬜ | [Folder](./MST-Kruskal/CF-32C-Flea) |
| 13 | [Igor in the Museum](http://codeforces.com/problemset/problem/598/D) | Codeforces | ⬜ | [Folder](./MST-Kruskal/CF-598D-Igor-in-the-Museum) |
| 14 | [Hongcow Builds a Nation](http://codeforces.com/problemset/problem/744/A) | Codeforces | ⬜ | [Folder](./MST-Kruskal/CF-744A-Hongcow-Builds-a-Nation) |
| 15 | [Re-connecting Computer Sites](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=849) | UVA | ⬜ | [Folder](./MST-Kruskal/UVA-908-Re-Connecting-Computer-Sites) |
| 16 | [Oreon](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3649) | UVA | ⬜ | [Folder](./MST-Kruskal/UVA-1208-Oreon) |
| 17 | [Anti Brute Force Lock](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3676) | UVA | ⬜ | [Folder](./MST-Kruskal/UVA-1235-Anti-Brute-Force-Lock) |
| 18 | [Freckles](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=975) | UVA | ⬜ | [Folder](./MST-Kruskal/UVA-10034-Freckles) |
| 19 | [Transportation system](https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2169) | UVA | ⬜ | [Folder](./MST-Kruskal/UVA-11228-Transportation-System) |
| 20 | [Dark roads](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2678) | UVA | ⬜ | [Folder](./MST-Kruskal/UVA-11631-Dark-Roads) |
| 21 | [Airports](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2833) | UVA | ⬜ | [Folder](./MST-Kruskal/UVA-11733-Airports) |
| 22 | [Heavy Cycle Edges](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2847) | UVA | ⬜ | [Folder](./MST-Kruskal/UVA-11747-Heavy-Cycle-Edges) |
| 23 | [Blinet](http://www.spoj.com/problems/BLINNET/) | SPOJ | ⬜ | [Folder](./MST-Kruskal/SPOJ-BLINNET-Blinet) |
| 24 | [Help the Old King](http://www.spoj.com/problems/IITKWPCG/) | SPOJ | ⬜ | [Folder](./MST-Kruskal/SPOJ-IITKWPCG-Help-the-Old-King) |
| 25 | [Hierarchy](http://codeforces.com/contest/17/problem/B) | Codeforces | ⬜ | [Folder](./MST-Kruskal/CF-17B-Hierarchy) |
| 26 | [Modems](https://www.spoj.com/problems/EC_MODE/) | SPOJ | ⬜ | [Folder](./MST-Kruskal/SPOJ-EC_MODE-Modems) |
| 27 | [Road Reparation](https://cses.fi/problemset/task/1675) | CSES | ✅ | [Folder](./MST-Kruskal/CSES-1675-Road-Reparation) |
| 28 | [Road Construction](https://cses.fi/problemset/task/1676) | CSES | ✅ | [Folder](./MST-Kruskal/CSES-1676-Road-Construction) |

## Kirchhoff Theorem

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [Roads in Stars](https://www.codechef.com/problems/STARROAD) | CodeChef | ⬜ | [Folder](./Kirchhoff-Theorem/CodeChef-STARROAD-Roads-in-Stars) |
| 2 | [Maze](http://www.spoj.com/problems/KPMAZE/) | SPOJ | ⬜ | [Folder](./Kirchhoff-Theorem/SPOJ-KPMAZE-Maze) |
| 3 | [Complement Spanning Trees](https://www.codechef.com/problems/CSTREE) | CodeChef | ⬜ | [Folder](./Kirchhoff-Theorem/CodeChef-CSTREE-Complement-Spanning-Trees) |

## Prufer Code

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [Anne's game](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=20&page=show_problem&problem=1784) | UVA | ⬜ | [Folder](./Prufer-Code/UVA-10843-Annes-Game) |
| 2 | [Prufer Code](http://acm.timus.ru/problem.aspx?space=1&num=1069) | Timus | ⬜ | [Folder](./Prufer-Code/Timus-1069-Prufer-Code) |
| 3 | [Clues](http://codeforces.com/contest/156/problem/D) | Codeforces | ⬜ | [Folder](./Prufer-Code/CF-156D-Clues) |
| 4 | [TheCitiesAndRoadsDivTwo](https://community.topcoder.com/stat?c=problem_statement&pm=10774&rd=14146) | TopCoder | ⬜ | [Folder](./Prufer-Code/TopCoder-TheCitiesAndRoadsDivTwo) |

## Finding Cycle

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [Reachability in Functional Graph](https://atcoder.jp/contests/abc357/tasks/abc357_e) | AtCoder | ⬜ | [Folder](./Finding-Cycle/AtCoder-ABC357E-Reachability-in-Functional-Graph) |
| 2 | [Round Trip](https://cses.fi/problemset/task/1669) | CSES | ✅ | [Folder](./Finding-Cycle/CSES-1669-Round-Trip) |
| 3 | [Round Trip II](https://cses.fi/problemset/task/1678/) | CSES | ✅ | [Folder](./Finding-Cycle/CSES-1678-Round-Trip-II) |
| 4 | [Shortest Cycle in a Graph](https://leetcode.com/problems/shortest-cycle-in-a-graph/) | LeetCode | ✅ | [Folder](./Finding-Cycle/LeetCode-Shortest-Cycle-in-a-Graph) |

## Negative Cycle

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [Wormholes](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=499) | UVA | ⬜ | [Folder](./Negative-Cycle/UVA-558-Wormholes) |
| 2 | [Alice in Amsterdam, I mean Wonderland](http://www.spoj.com/problems/UCV2013B/) | SPOJ | ⬜ | [Folder](./Negative-Cycle/SPOJ-UCV2013B-Alice-in-Amsterdam-I-Mean-Wonderland) |
| 3 | [Johnsons Algorithm](http://www.spoj.com/problems/JHNSN/) | SPOJ | ⬜ | [Folder](./Negative-Cycle/SPOJ-JHNSN-Johnsons-Algorithm) |

## Eulerian Path

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [Mail Delivery](https://cses.fi/problemset/task/1691) | CSES | ⬜ | [Folder](./Eulerian-Path/CSES-1691-Mail-Delivery) |
| 2 | [Teleporters Path](https://cses.fi/problemset/task/1693) | CSES | ⬜ | [Folder](./Eulerian-Path/CSES-1693-Teleporters-Path) |
| 3 | [Melody](https://codeforces.com/contest/2110/problem/E) | Codeforces | ⬜ | [Folder](./Eulerian-Path/CF-2110E-Melody) |
| 4 | [Tanya and Password](https://codeforces.com/contest/508/problem/D) | Codeforces | ⬜ | [Folder](./Eulerian-Path/CF-508D-Tanya-and-Password) |

## LCA

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [Lowest Common Ancestor](http://www.spoj.com/problems/LCA/) | SPOJ | ⬜ | [Folder](./LCA/SPOJ-LCA-Lowest-Common-Ancestor) |
| 2 | [Distance Query](http://www.spoj.com/problems/DISQUERY/) | SPOJ | ⬜ | [Folder](./LCA/SPOJ-DISQUERY-Distance-Query) |
| 3 | [Distance in the Tree](http://acm.timus.ru/problem.aspx?space=1&num=1471) | Timus | ⬜ | [Folder](./LCA/Timus-1471-Distance-in-the-Tree) |
| 4 | [Design Tutorial: Inverse the Problem](http://codeforces.com/problemset/problem/472/D) | Codeforces | ⬜ | [Folder](./LCA/CF-472D-Design-Tutorial-Inverse-the-Problem) |
| 5 | [Lowest Common Ancestor](https://www.codechef.com/problems/TALCA) | CodeChef | ⬜ | [Folder](./LCA/CodeChef-TALCA-Lowest-Common-Ancestor) |
| 6 | [Lowest Common Ancestor](http://www.spoj.com/problems/LCASQ/) | SPOJ | ⬜ | [Folder](./LCA/SPOJ-LCASQ-Lowest-Common-Ancestor) |
| 7 | [Ada and Orange Tree](http://www.spoj.com/problems/ADAORANG/) | SPOJ | ⬜ | [Folder](./LCA/SPOJ-ADAORANG-Ada-and-Orange-Tree) |
| 8 | [Motoku](http://web.archive.org/web/20200922005503/https://devskill.com/CodingProblems/ViewProblem/141) | DevSkill | ⬜ | [Folder](./LCA/DevSkill-141-Motoku) |
| 9 | [Trucks](https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=4384) | UVA | ⬜ | [Folder](./LCA/UVA-12655-Trucks) |
| 10 | [Pishty and Tree](https://www.codechef.com/problems/PSHTTR) | CodeChef | ⬜ | [Folder](./LCA/CodeChef-PSHTTR-Pishty-and-Tree) |
| 11 | [Joining Couples](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=441&page=show_problem&problem=3978) | UVA | ⬜ | [Folder](./LCA/UVA-12533-Joining-Couples) |
| 12 | [So close yet So Far](https://www.codechef.com/problems/CLOSEFAR) | CodeChef | ⬜ | [Folder](./LCA/CodeChef-CLOSEFAR-So-Close-Yet-So-Far) |
| 13 | [Drivers Dissatisfaction](http://codeforces.com/contest/733/problem/F) | Codeforces | ⬜ | [Folder](./LCA/CF-733F-Drivers-Dissatisfaction) |
| 14 | [Bond](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2339) | UVA | ⬜ | [Folder](./LCA/UVA-11354-Bond) |
| 15 | [Query on a tree II](http://www.spoj.com/problems/QTREE2/) | SPOJ | ⬜ | [Folder](./LCA/SPOJ-QTREE2-Query-on-a-Tree-II) |
| 16 | [Best Edge Weight](http://codeforces.com/contest/828/problem/F) | Codeforces | ⬜ | [Folder](./LCA/CF-828F-Best-Edge-Weight) |
| 17 | [Misha, Grisha and Underground](http://codeforces.com/contest/832/problem/D) | Codeforces | ⬜ | [Folder](./LCA/CF-832D-Misha-Grisha-and-Underground) |
| 18 | [Nlogonian Tickets](http://www.spoj.com/problems/NTICKETS/) | SPOJ | ⬜ | [Folder](./LCA/SPOJ-NTICKETS-Nlogonian-Tickets) |
| 19 | [Rowena Rawenclaws Diadem](http://codeforces.com/contest/855/problem/D) | Codeforces | ⬜ | [Folder](./LCA/CF-855D-Rowena-Rawenclaws-Diadem) |

## LCA Binary Lifting

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [Kth Ancestor of a Tree Node](https://leetcode.com/problems/kth-ancestor-of-a-tree-node) | LeetCode | ⬜ | [Folder](./LCA-Binary-Lifting/LeetCode-Kth-Ancestor-of-a-Tree-Node) |
| 2 | [Longest Good Segment](https://www.codechef.com/problems/LGSEG) | CodeChef | ⬜ | [Folder](./LCA-Binary-Lifting/CodeChef-LGSEG-Longest-Good-Segment) |
| 3 | [Optimal Connectivity](https://www.hackerearth.com/practice/algorithms/graphs/graph-representation/practice-problems/algorithm/optimal-connectivity-c6ae79ca/) | HackerEarth | ⬜ | [Folder](./LCA-Binary-Lifting/HackerEarth-Optimal-Connectivity) |

## Max Flow Edmonds-Karp

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [Array and Operations](https://codeforces.com/contest/498/problem/c) | Codeforces | ⬜ | [Folder](./Max-Flow-Edmonds-Karp/CF-498C-Array-and-Operations) |
| 2 | [Red-Blue Graph](https://codeforces.com/contest/1288/problem/f) | Codeforces | ⬜ | [Folder](./Max-Flow-Edmonds-Karp/CF-1288F-Red-Blue-Graph) |
| 3 | [Download Speed](https://cses.fi/problemset/task/1694) | CSES | ⬜ | [Folder](./Max-Flow-Edmonds-Karp/CSES-1694-Download-Speed) |
| 4 | [Police Chase](https://cses.fi/problemset/task/1695) | CSES | ⬜ | [Folder](./Max-Flow-Edmonds-Karp/CSES-1695-Police-Chase) |
| 5 | [School Dance](https://cses.fi/problemset/task/1696) | CSES | ⬜ | [Folder](./Max-Flow-Edmonds-Karp/CSES-1696-School-Dance) |
| 6 | [Distinct Routes](https://cses.fi/problemset/task/1711) | CSES | ⬜ | [Folder](./Max-Flow-Edmonds-Karp/CSES-1711-Distinct-Routes) |

## Dinic

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [Fast Maximum Flow](https://www.spoj.com/problems/FASTFLOW/) | SPOJ | ⬜ | [Folder](./Dinic/SPOJ-FASTFLOW-Fast-Maximum-Flow) |

## Min-Cost Flow

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [Task Assignment](https://cses.fi/problemset/task/2129) | CSES | ⬜ | [Folder](./Min-Cost-Flow/CSES-2129-Task-Assignment) |
| 2 | [Grid Puzzle II](https://cses.fi/problemset/task/2131) | CSES | ⬜ | [Folder](./Min-Cost-Flow/CSES-2131-Grid-Puzzle-II) |
| 3 | [Dream Team](https://atcoder.jp/contests/abc247/tasks/abc247_g) | AtCoder | ⬜ | [Folder](./Min-Cost-Flow/AtCoder-ABC247G-Dream-Team) |

## Bipartite Check

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [A Bugs Life](http://www.spoj.com/problems/BUGLIFE/) | SPOJ | ⬜ | [Folder](./Bipartite-Check/SPOJ-BUGLIFE-A-Bugs-Life) |
| 2 | [Graph Without Long Directed Paths](https://codeforces.com/contest/1144/problem/F) | Codeforces | ⬜ | [Folder](./Bipartite-Check/CF-1144F-Graph-Without-Long-Directed-Paths) |
| 3 | [String Coloring](https://codeforces.com/contest/1296/problem/E1) | Codeforces | ⬜ | [Folder](./Bipartite-Check/CF-1296E1-String-Coloring) |
| 4 | [Building Teams](https://cses.fi/problemset/task/1668) | CSES | ✅ | [Folder](./Bipartite-Check/CSES-1668-Building-Teams) |
| 5 | [Alternating Path](https://codeforces.com/contest/2204/problem/D) | Codeforces | ⬜ | [Folder](./Bipartite-Check/CF-2204D-Alternating-Path) |

## Kuhn Matching

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [Gopher II](https://open.kattis.com/problems/gopher2) | Kattis | ⬜ | [Folder](./Kuhn-Matching/Kattis-Gopher-II) |
| 2 | [Borders](https://open.kattis.com/problems/borders) | Kattis | ⬜ | [Folder](./Kuhn-Matching/Kattis-Borders) |

## Hungarian

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [Crime Wave - The Sequel](http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1687) | UVA | ⬜ | [Folder](./Hungarian/UVA-10746-Crime-Wave-The-Sequel) |
| 2 | [Warehouse](http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1829) | UVA | ⬜ | [Folder](./Hungarian/UVA-10888-Warehouse) |
| 3 | [Beloved Sons](http://acm.sgu.ru/problem.php?contest=0&problem=210) | SGU | ⬜ | [Folder](./Hungarian/SGU-210-Beloved-Sons) |
| 4 | [The Great Wall Game](http://livearchive.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1277) | UVA Live Archive | ⬜ | [Folder](./Hungarian/LA-The-Great-Wall-Game) |
| 5 | [Jogging Trails](http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1237) | UVA | ⬜ | [Folder](./Hungarian/UVA-10296-Jogging-Trails) |

## Topological Sort

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [Topological Sorting](http://www.spoj.com/problems/TOPOSORT/) | SPOJ | ✅ | [Folder](./Topological-Sort/SPOJ-TOPOSORT-Topological-Sorting) |
| 2 | [Ordering Tasks](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1246) | UVA | ⬜ | [Folder](./Topological-Sort/UVA-10305-Ordering-Tasks) |
| 3 | [Following Orders](https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=60) | UVA | ⬜ | [Folder](./Topological-Sort/UVA-124-Following-Orders) |
| 4 | [Rare Order](https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=136) | UVA | ⬜ | [Folder](./Topological-Sort/UVA-200-Rare-Order) |
| 5 | [Fox and Names](http://codeforces.com/problemset/problem/510/C) | Codeforces | ✅ | [Folder](./Topological-Sort/CF-510C-Fox-and-Names) |
| 6 | [Answer the boss!](https://www.spoj.com/problems/RPLA/) | SPOJ | ⬜ | [Folder](./Topological-Sort/SPOJ-RPLA-Answer-the-Boss) |
| 7 | [Course Schedule](https://cses.fi/problemset/task/1679) | CSES | ✅ | [Folder](./Topological-Sort/CSES-1679-Course-Schedule) |
| 8 | [Longest Flight Route](https://cses.fi/problemset/task/1680) | CSES | ✅ | [Folder](./Topological-Sort/CSES-1680-Longest-Flight-Route) |
| 9 | [Game Routes](https://cses.fi/problemset/task/1681) | CSES | ✅ | [Folder](./Topological-Sort/CSES-1681-Game-Routes) |
| 10 | [Course Schedule II](https://cses.fi/problemset/task/1757) | CSES | ✅ | [Folder](./Topological-Sort/CSES-1757-Course-Schedule-II) |
| 11 | [Topological Sort](https://codeforces.com/problemset/gymProblem/101102/K) | Codeforces Gym | ⬜ | [Folder](./Topological-Sort/CF-Gym-101102K-Topological-Sort) |
| 12 | [Find Permutation](https://atcoder.jp/contests/abc291/tasks/abc291_e) | AtCoder | ✅ | [Folder](./Topological-Sort/AtCoder-ABC291E-Find-Permutation) |
| 13 | [Count Ways to Build Rooms in an Ant Colony](https://leetcode.com/problems/count-ways-to-build-rooms-in-an-ant-colony/description/) | LeetCode | ✅ | [Folder](./Topological-Sort/LeetCode-Count-Ways-to-Build-Rooms-in-an-Ant-Colony) |
| 14 | [Permutation Counting](https://codeforces.com/gym/103741/problem/H) | Codeforces Gym | ✅ | [Folder](./Topological-Sort/CF-Gym-103741H-Permutation-Counting) |

## 2-SAT

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [The Door Problem](http://codeforces.com/contest/776/problem/D) | Codeforces | ⬜ | [Folder](./2-SAT/CF-776D-The-Door-Problem) |
| 2 | [Illumination](https://open.kattis.com/problems/illumination) | Kattis | ⬜ | [Folder](./2-SAT/Kattis-Illumination) |
| 3 | [Rectangles](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3081) | UVA | ⬜ | [Folder](./2-SAT/UVA-Rectangles) |
| 4 | [Radio Stations](https://codeforces.com/problemset/problem/1215/F) | Codeforces | ⬜ | [Folder](./2-SAT/CF-1215F-Radio-Stations) |
| 5 | [Giant Pizza](https://cses.fi/problemset/task/1684) | CSES | ⬜ | [Folder](./2-SAT/CSES-1684-Giant-Pizza) |
| 6 | [Plus Minus One](https://codeforces.com/contest/1971/problem/H) | Codeforces | ⬜ | [Folder](./2-SAT/CF-1971H-Plus-Minus-One) |
| 7 | [Colorful Village](https://codeforces.com/gym/104772/problem/C) | Codeforces Gym | ⬜ | [Folder](./2-SAT/CF-Gym-104772C-Colorful-Village) |
| 8 | [Renovation](https://szkopul.edu.pl/problemset/problem/xNjwUvwdHQoQTFBrmyG8vD1O/site/?key=statement) | POI | ⬜ | [Folder](./2-SAT/POI-Renovation) |

## HLD

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [Query on a tree](https://www.spoj.com/problems/QTREE/) | SPOJ | ⬜ | [Folder](./HLD/SPOJ-QTREE-Query-on-a-Tree) |
| 2 | [Path Queries II](https://cses.fi/problemset/task/2134) | CSES | ⬜ | [Folder](./HLD/CSES-2134-Path-Queries-II) |
| 3 | [Subway Lines](https://codeforces.com/gym/101908/problem/L) | Codeforces Gym | ⬜ | [Folder](./HLD/CF-Gym-101908L-Subway-Lines) |
| 4 | [Tree Queries](https://codeforces.com/contest/1254/problem/D) | Codeforces | ⬜ | [Folder](./HLD/CF-1254D-Tree-Queries) |
| 5 | [Tree or not Tree](https://codeforces.com/contest/117/problem/E) | Codeforces | ⬜ | [Folder](./HLD/CF-117E-Tree-or-Not-Tree) |
| 6 | [The Tree](https://codeforces.com/contest/1017/problem/G) | Codeforces | ⬜ | [Folder](./HLD/CF-1017G-The-Tree) |
| 7 | [Balkan OI 2018 - Min-max tree](https://oj.uz/problem/view/BOI18_minmaxtree) | oj.uz | ⬜ | [Folder](./HLD/OJUZ-BOI18-Min-Max-Tree) |

## Centroid Decomposition

| # | Problem | Judge | Status | Solution |
|---|---------|-------|--------|----------|
| 1 | [Finding a Centroid](https://cses.fi/problemset/task/2079) | CSES | ⬜ | [Folder](./Centroid-Decomposition/CSES-2079-Finding-a-Centroid) |
| 2 | [Fixed-Length Paths II](https://cses.fi/problemset/task/2081) | CSES | ⬜ | [Folder](./Centroid-Decomposition/CSES-2081-Fixed-Length-Paths-II) |
| 3 | [Xenia and Tree](http://codeforces.com/problemset/problem/342/E) | Codeforces | ⬜ | [Folder](./Centroid-Decomposition/CF-342E-Xenia-and-Tree) |
| 4 | [Digit Tree](http://codeforces.com/contest/716/problem/E) | Codeforces | ⬜ | [Folder](./Centroid-Decomposition/CF-716E-Digit-Tree) |
| 5 | [Race](https://oj.uz/problem/view/IOI11_race) | oj.uz | ⬜ | [Folder](./Centroid-Decomposition/OJUZ-IOI11-Race) |
| 6 | [Query on a Tree V](http://www.spoj.com/problems/QTREE5/) | SPOJ | ⬜ | [Folder](./Centroid-Decomposition/SPOJ-QTREE5-Query-on-a-Tree-V) |

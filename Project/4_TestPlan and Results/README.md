# High Level Testplan
| ID | Description | Status |
|----|-------------|--------|
| HLT1|traffic signal should work on time basis|Implemented|
|HLT2|IR sensor should sense the traffic density and take necessary steps|Implemented|

# Low Level Testplan
| ID | Description | expected output | actual output | Status |
|----|-------------|---------------|----------------|----------|
|LLT1|If density is high at road 1|G1: ON|G1: ON|Implemented|
|    |                         |Y2: ON|Y2: ON|            |
|    |                         |R3: ON|R3: ON|            |
|    |                         |R4: ON|R4: ON|            |
|LLT2|If density is high at road 2|G2: ON|G2: ON|Implemented|
|    |                         |Y3: ON|Y3: ON|            |
|    |                         |R4: ON|R4: ON|            |
|    |                         |R1: ON|R1: ON|            |
|LLT3|If density is high at road 3|G3: ON|G3: ON|Implemented|
|    |                         |Y4: ON|Y4: ON|            |
|    |                         |R1: ON|R1: ON|            |
|    |                         |R2: ON|R2: ON|            |
|LLT4|If density is high at road 4|G4: ON|G4: ON|Implemented|
|    |                         |Y1: ON|Y1: ON|            |
|    |                         |R2: ON|R2: ON|            |
|    |                         |R3: ON|R3: ON|            |

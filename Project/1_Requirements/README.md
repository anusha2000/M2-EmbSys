# Requirements
## High level Requirements
|ID|Description |
|---|----------|
|HLR1|Traffic signals should work on the time basis|
|HLR2|IR sensor should sense the traffic density on any road|
|HLR3|Once the traffic is clear in the particular road then the traffic signal should come back to its normal mode|

## Low level requirements
|HLID|LLID|Description|
|----|----|------------|
|HLR1|LLR1|If two of the signals are red, the next signal which is after this should be yellow and another one should be green|
|HLR2|LLR1|If there is traffic on any road then that particular sensor should detect the density|
|     |LLR2|Then give green signal to that path and red to all other paths|

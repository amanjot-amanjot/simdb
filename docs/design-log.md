## Design Log
## 17 September, 2026
Decision, using Euclidean distance as 
the initial distance metric instead of 
cosine similarity. Reasoning, Euclidean is 
simpler to implement and verify by hand,  and 
it establishes a working baseline. Cosine similarity can be 
added later as an alternate metric once the 
core system works, since swapping distance 
functions should be a small change, not a redesign.
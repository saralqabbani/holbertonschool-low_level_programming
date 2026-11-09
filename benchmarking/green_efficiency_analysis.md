# Green Efficiency Analysis

## Measurement Methodology

The purpose of this experiment was to investigate program execution time and understand how algorithm design affects computational efficiency. Three programs were used: a baseline loop, an algorithmic efficiency comparison, and a controlled instrumentation experiment.

The baseline program executed 100,000,000 iterations and was measured three times. The recorded execution times were 0.097046 seconds, 0.096349 seconds, and 0.096163 seconds. The average execution time was approximately 0.096519 seconds.

The comparison program tested two algorithms using the same dataset. The naive algorithm used nested loops, while the single-pass algorithm processed the dataset in one traversal. Both algorithms were executed three times, and their execution times were recorded.

The instrumentation experiment used the C clock() function to measure total execution time and the time spent in three individual phases: BUILD_DATA, PROCESS, and REDUCE. All measurements were printed with six decimal places.

## Observed Performance Differences

The comparison results showed a significant difference between the two algorithms.

The naive algorithm produced a result of 625025000 in all three runs. Its execution times were 1.633990 seconds, 2.094371 seconds, and 2.148552 seconds. Its average execution time was approximately 1.958971 seconds.

The single-pass algorithm produced a result of 25000 in all three runs. Its execution times were 0.000053 seconds, 0.000063 seconds, and 0.000109 seconds. Its average execution time was approximately 0.000075 seconds.

The single-pass algorithm was substantially faster in this experiment. The average naive execution time was approximately 26,120 times greater than the average single-pass execution time.

The baseline program also showed relatively consistent results, with an average execution time of approximately 0.096519 seconds.

The instrumentation experiment recorded a total runtime of 0.000525 seconds. BUILD_DATA took 0.000233 seconds, PROCESS took 0.000209 seconds, and REDUCE took 0.000079 seconds.

## Relation Between Runtime and Energy Consumption

Execution time is an important factor when considering energy efficiency. A program that finishes faster may spend less time using the processor.

However, execution time alone does not prove how much electrical energy a program consumes. Energy depends on both power usage and execution duration. Direct power measurements would be necessary to determine actual energy consumption.

Therefore, this experiment provides evidence about runtime differences, but it does not directly measure electrical energy.

## Limitations of the Experiment

This experiment has several limitations. First, all measurements were collected on one machine, so results may differ on other hardware.

Second, only three runs were performed for each comparison. Background processes and system activity may affect execution times.

Third, clock() measures processor time rather than direct electrical energy consumption. Therefore, the experiment cannot establish exact energy savings.

Finally, the dataset size and workload were fixed, so the results may not represent every real-world application.

## Practical Engineering Takeaway

The experiment demonstrates the importance of choosing efficient algorithms. The single-pass implementation performed significantly faster than the naive nested-loop implementation.

Software engineers should consider algorithmic complexity before attempting smaller code optimizations. Repeated measurements are also important for understanding performance.

Finally, runtime measurements can help identify efficient implementations, but direct power measurements are required before making reliable claims about energy consumption.

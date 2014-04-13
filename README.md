MCAT DrillBit

As extremely fast and confident command of multiplication tables is key to MCAT performance, this is an adaptive drill program to identify and work harder on weak or unknown multiplication tables.


*2014-04-12
Here are the technical solutions I'm considering:

struct Problem[1..15][1..15]
{
    term1=1..15;
    term2=1..15;
    answer=1..15*1..15;
    weight;
}

Weight ->
    n=1
    n = 1/n
    n++ for correct answer
    n-- for wrong answer

Probably add saving capability.


*2014-04-13

That struct approach sucks. Changed to one-D struct array, sized by //const int MAX_SIZE

Weight will be based on two-stage probability to give a simple "learning response," which successively repeats Facts that are answered correctly less often.

Select random( 0 , //MAX_TERM) -> Use Fractional //double weight as test against random function. -> Pass - Fact is presented | Fail - Reselect Fact

For now, a simplified one will have to do.

Here's the comments I'll probably use when I do it.
    //Initialize Facts Table
    
    //Stunt all the too-easy ones
    
    //Ask questions
            //randomize order of terms
        //If correct:
            //acknowledge
            //adjust MFact.weight
        //If not:
            //acknowledge
            //correct
            //adjust MFact.weight
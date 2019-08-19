    %This program is about having  fun with the number 9
    %multiply a number times 9 and input that number
    %make sure to skip one number from the value
    
    %{
    disp("Enter a number to multiply nu 9");
    valMult = input("Number to Muliply: ");
    valMult = valMult * 9;
    disp(valMult);
    %}

    clear;
    disp("Enter your number and skip a number");
    valNine = input("Your Number: ");
    valNineSep = dec2base(valNine,10) - '0';
    disp(valNineSep);
    adder = 0;

    for i = 1 : length(valNineSep)
        adder = adder + valNineSep(i);
    end

    nineToTen = [9, 18, 27, 36, 45, 54, 63, 72, 81, 90, 99];
    
    for i = 1 : length(nineToTen)
        adderArray(i) = abs(nineToTen(i) - adder);
    end

    getFirstRow = adderArray(1:end, 1:2)
    
    for  i = 1 : length(getFirstRow)
        if getFirstRow(i) < 9
            finalArray(i) = abs(getFirstRow(i));
            disp(finalArray(i));
        end
    end

    minValAdder = max(finalArray);
    actualValue = abs(minValAdder);

    if minValAdder == 9 || minValAdder == 0
        fprintf("Your missing value is either a 9 or a 0\n");
    else
        if (valNine*10) < 5000
            fprintf("Your missing value is: %d\n", actualValue);
        else
            actualValue = abs(9 - minValAdder)
            fprintf("Your missing value is: %d\n", actualValue);
        end
    end

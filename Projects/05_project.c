// Unit Converter...

# include <stdio.h>

int main(){

    printf("\n\"Welcome to Unit Converter\"\n\n");
    printf("--> Press a Number for Specific Unit Converter of the following... \n\n");

    int num1, num2, length1, length2, weight1, weight2, time1, time2, currency1, currency2, temp1, temp2;
    
    float nanom, microm, millim, centi, inch, foot, yard, meter, kilo, mile;
    float millig, carat, gram, ounce, pound, ston, mton, lton;
    float nanos, micros, millis, second, minute, hour, day, week, month, year;
    float celsius, fahrenheit, kelvin;

    start :

    printf("1 — Length Converter \n");
    printf("2 — Weight Converter \n");
    printf("3 — Time Converter \n");
    printf("4 — Temperature Converter \n\n");

    unit :

    printf("Enter a Number for Specific Unit Converter : ");
    scanf("%d", &num1);

    switch (num1){

        case 1 : printf("\nFind the Units to Convert : \n\n");

            printf("   1 — Nanometer \n");
            printf("   2 — Micrometer \n");
            printf("   3 — Millimeter \n");
            printf("   4 — Centimeter \n");
            printf("   5 — Inch \n");
            printf("   6 — Foot \n");
            printf("   7 — Yard \n");
            printf("   8 — Meter \n");
            printf("   9 — Kilometer \n");
            printf("   10 — Mile \n");
            printf("   11 — Light Year \n\n");

            length1 :

            printf("From (1 to 11) : ");
            scanf("%d", &length1);

            switch (length1){

                case 1 :

                    printf("Enter Length in Nanometers : ");
                    scanf("%f", &nanom);
                    break;

                case 2 :

                    printf("Enter Length in Micrometers : ");
                    scanf("%f", &microm);
                    nanom = microm * 1000;
                    break;

                case 3 :

                    printf("Enter Length in Millimeters : ");
                    scanf("%f", &millim);
                    nanom = millim * 1000000;
                    break;

                case 4 :

                    printf("Enter Length in Centimeters : ");
                    scanf("%f", &centi);
                    nanom = centi * 10000000;
                    break;

                case 5 :

                    printf("Enter Length in Inches : ");
                    scanf("%f", &inch);
                    nanom = inch * 25400000;
                    break;

                case 6 :

                    printf("Enter Length in Feet : ");
                    scanf("%f", &foot);
                    nanom = foot * 304800000;
                    break;

                case 7 :

                    printf("Enter Length in Yards : ");
                    scanf("%f", &yard);
                    nanom = yard * 914400000;
                    break;

                case 8 :

                    printf("Enter Length in Meters : ");
                    scanf("%f", &meter);
                    nanom = meter * 1000;
                    break;

                case 9 :

                    printf("Enter Length in Kilometers : ");
                    scanf("%f", &kilo);
                    nanom = kilo * 1000000000000;
                    break;

                case 10 :

                    printf("Enter Length in Miles : ");
                    scanf("%f", &mile);
                    nanom = mile * 1609350000000;
                    break;

                default :

                    printf("not valid! try again... \n\n");
                    goto length1;

            }

            length2 :

            printf("\nTo (1 to 11) : ");
            scanf("%d", &length2);

            switch (length2){

                case 1 :

                    printf("Length in Nanometers is : %.2f \n\n", nanom);
                        break;

                case 2 :

                    microm = nanom / 1000;
                    printf("Length in Micrometers is : %.2f \n\n", microm);
                        break;

                case 3 :

                    millim = nanom / 1000000;
                    printf("Length in Millimeters is : %.2f \n\n", millim);
                        break;

                case 4 :

                    centi = nanom / 10000000;
                    printf("Length in Centimeters is : %.2f \n\n", centi);
                        break;

                case 5 :

                    inch = nanom / 25400000;
                    printf("Length in Inches is : %.4f \n\n", inch);
                        break;

                case 6 :

                    foot = nanom / 304800000;
                    printf("Length in Feet is : %.4f \n\n", foot);
                        break;

                case 7 :

                    yard = nanom / 914400000;
                    printf("Length in Yards is : %.4f \n\n", yard);
                        break;

                case 8 :

                    meter = nanom / 1000000000;
                    printf("Length in Meters is : %.4f \n\n", meter);
                        break;

                case 9 :

                    kilo = nanom / 1000000000000;
                    printf("Length in Kilometers is : %.4f \n\n", kilo);
                        break;

                case 10 :

                    mile = nanom / 1609350000000;
                    printf("Length in Miles is : %.4f \n\n", mile);
                        break;

                default :

                    printf("not valid! try again... \n\n");
                    goto length2;

            }

            break;

        case 2 : printf("\nFind the Units to Convert : \n\n");

            printf("   1 — Milligram \n");
            printf("   2 — Carat \n");
            printf("   3 — Gram \n");
            printf("   4 — Ounce \n");
            printf("   5 — Pound \n");
            printf("   6 — Kilogram \n");
            printf("   7 — Short Ton (US Ton) \n");
            printf("   8 — Metric Ton \n");
            printf("   9 — Long Ton (British Ton) \n\n");

            weight1 :

            printf("From (1 to 9) : ");
            scanf("%d", &weight1);

            switch (weight1){

                case 1 :

                    printf("Enter Weight in Milligrams : ");
                    scanf("%f", &millig);
                    break;

                case 2 :

                    printf("Enter Weight in Carats : ");
                    scanf("%f", &carat);
                    millig = carat * 200;
                    break;

                case 3 :

                    printf("Enter Weight in Grams : ");
                    scanf("%f", &gram);
                    millig = gram * 1000;
                    break;

                case 4 :

                    printf("Enter Weight in Ounces : ");
                    scanf("%f", &ounce);
                    millig = ounce * 28349.5;
                    break;

                case 5 :

                    printf("Enter Weight in Pounds : ");
                    scanf("%f", &pound);
                    millig = pound * 453592;
                    break;

                case 6 :

                    printf("Enter Weight in Kilograms : ");
                    scanf("%f", &kilo);
                    millig = kilo * 1000000;
                    break;

                case 7 :

                    printf("Enter Weight in Short Tons : ");
                    scanf("%f", &ston);
                    millig = ston * 907184000;
                    break;

                case 8 :

                    printf("Enter Weight in Metric Tons : ");
                    scanf("%f", &mton);
                    millig = mton * 1000000000;
                    break;

                case 9 :

                    printf("Enter Weight in Long Tons : ");
                    scanf("%f", &lton);
                    millig = lton * 1016046080;
                    break;

                default :

                    printf("not valid! try again... \n\n");
                    goto weight1;

            }

            weight2 :

            printf("\nTo (1 to 9) : ");
            scanf("%d", &weight2);

            switch (weight2){

                case 1 :

                    printf("Weight in Milligrams is : %.4f \n\n", millig);
                    break;

                case 2 :

                    carat = millig / 200;
                    printf("Weight in Carats is : %.4f \n\n", carat);
                    break;

                case 3 :

                    gram = millig / 1000;
                    printf("Weight in Grams is : %.4f \n\n", gram);
                    break;

                case 4 :

                    ounce = millig / 28349.5;
                    printf("Weight in Ounces is : %.4f \n\n", ounce);
                    break;

                case 5 :

                    pound = millig / 453592;
                    printf("Weight in Pounds is : %.4f \n\n", pound);
                    break;

                case 6 :

                    kilo = millig / 1000000;
                    printf("Weight in Kilograms is : %.4f \n\n", kilo);
                    break;

                case 7 :

                    ston = millig / 907184000;
                    printf("Weight in Short Tons is : %.4f \n\n", ston);
                    break;

                case 8 :

                    mton = millig / 1000000000;
                    printf("Weight in Metric Tons is : %.4f \n\n", mton);
                    break;

                case 9 :

                    lton = millig / 1016046080;
                    printf("Weight in Long Tons is : %.4f \n\n", lton);
                    break;
                
                default :

                    printf("not valid! try again... \n\n");
                    goto weight2;

            }
            
            break;

        case 3 : printf("\nFind the Units to Convert : \n\n");

            printf("   1 — Nanosecond \n");
            printf("   2 — Microsecond \n");
            printf("   3 — Millisecond \n");
            printf("   4 — Second \n");
            printf("   5 — Minute \n");
            printf("   6 — Hour \n");
            printf("   7 — Day \n");
            printf("   8 — Week \n");
            printf("   9 — Month \n");
            printf("   10 — Year \n\n");

            time1 :

            printf("From (1 to 10) : ");
            scanf("%d", &time1);

            switch (time1){

                case 1 :

                    printf("Enter Time in Nanoseconds : ");
                    scanf("%f", &nanos);
                    break;

                case 2 :

                    printf("Enter Time in Microseconds : ");
                    scanf("%f", &micros);
                    nanos = microm * 1000;
                    break;

                case 3 :

                    printf("Enter Time in Milliseconds : ");
                    scanf("%f", &millis);
                    nanos = millis * 1000000;
                    break;

                case 4 :

                    printf("Enter Time in Seconds : ");
                    scanf("%f", &second);
                    nanos = second * 1000000000;
                    break;

                case 5 :

                    printf("Enter Time in Minutes : ");
                    scanf("%f", &minute);
                    nanos = minute * 60000000000;
                    break;

                case 6 :

                    printf("Enter Time in Hours : ");
                    scanf("%f", &hour);
                    nanos = hour * 3600000000000;
                    break;

                case 7 :

                    printf("Enter Time in Days : ");
                    scanf("%f", &day);
                    nanos = day * 86400000000000;
                    break;

                case 8 :

                    printf("Enter Time in Weeks : ");
                    scanf("%f", &week);
                    nanos = week * 604800000000000;
                    break;

                case 9 :

                    printf("Enter Time in Months : ");
                    scanf("%f", &month);
                    nanos = month * 2629800000000000;
                    break;

                case 10 :

                    printf("Enter Time in years : ");
                    scanf("%f", &year);
                    nanos = year * 31557600000000000;
                    break;

                default :

                    printf("not valid! try again... \n\n");
                    goto time1;

            }

            time2 :

            printf("\nTo (1 to 10) : ");
            scanf("%d", &time2);

            switch (time2){

                case 1 :

                    printf("Time in Nanoseconds is : %.3f \n\n", nanos);
                    break;

                case 2 :

                    micros = nanos / 1000;
                    printf("Time in Microseconds is : %.3f \n\n", micros);
                    break;

                case 3 :

                    millis = nanos / 1000000;
                    printf("Time in Milliseconds is : %.3f \n\n", millis);
                    break;

                case 4 :

                    second = nanos / 1000000000;
                    printf("Time in Seconds is : %.3f \n\n", second);
                    break;

                case 5 :

                    minute = nanos / 60000000000;
                    printf("Time in Minutes is : %.3f \n\n", minute);
                    break;

                case 6 :

                    hour = nanos / 3600000000000;
                    printf("Time in Hours is : %.3f \n\n", hour);
                    break;

                case 7 :

                    day = nanos / 86400000000000;
                    printf("Time in Days is : %.6f \n\n", day);
                    break;

                case 8 :

                    week = nanos / 604800000000000;
                    printf("Time in Weeks is : %.6f \n\n", week);
                    break;

                case 9 :

                    month = nanos / 2629800000000000;
                    printf("Time in Months is : %.6f \n\n", month);
                    break;

                case 10 :

                    year = nanos / 31557600000000000;
                    printf("Time in Years is : %.6f \n\n", year);
                    break;

                default :

                    printf("not valid! try again... \n\n");
                    goto time2;

            }

            break;

        case 4 : printf("\nFind Units to Convert : \n\n");

            printf("   1 — Celsius \n");
            printf("   2 — Fahrenheit \n");
            printf("   3 — Kelvin \n\n");

            temp1 :

            printf("From (1 to 3) : ");
            scanf("%d", &temp1);

            switch (temp1){

                case 1 :

                    printf("Enter Temperature in °C : ");
                    scanf("%f", &celsius);
                    break;

                case 2 :

                    printf("Enter Temperature in °F : ");
                    scanf("%f", &fahrenheit);
                    celsius = (fahrenheit - 32) * 5 / 9;
                    break;

                case 3 :

                    printf("Enter Temperature in K : ");
                    scanf("%f", &kelvin);
                    celsius = kelvin - 273.15;
                    break;

                default :

                    printf("not valid! try again... \n\n");
                    goto temp1;

            }

            temp2 :

            printf("\nTo (1 to 3) : ");
            scanf("%d", &temp2);

            switch (temp2){

                case 1 :

                    printf("Temperature in °C is : %.2f \n\n", celsius);
                    break;

                case 2 :

                    fahrenheit = (celsius * 9 / 5) + 32;
                    printf("Temperature in °F is : %.2f \n\n", fahrenheit);
                    break;

                case 3 :

                    kelvin = celsius + 273.15;
                    printf("Temperature in K is : %.2f \n\n", kelvin);
                    break;

                default :

                    printf("not valid! try again... \n\n");
                    goto temp2;

            }

            break;

        default : printf("not valid! try again... \n\n");
            goto unit;

    }

    end :

    printf("1) Convert More \t 2) Clear : ");
    scanf("%d", &num2);

    switch (num2){

        case 1 : printf("\n");
            goto start;
            break;

        case 2 : printf("\n");
            break;

        default : printf("not valid! try again... \n\n");
            goto end;

    }

    return 0;
}
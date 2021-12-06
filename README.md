
# "9465"

made by Jaehyeok Choi

## Welcome to Jaehyeok's github!

## What is the problem?

![button](https://github.com/Choi-JaeHyeok-21500749/9465/blob/main/9465_pro.JPG)

## What Algorithm should I use?

dynamic programming

## What was the key point and the hard part?

There is 2 options while taking the max score.

case1

![button](https://github.com/Choi-JaeHyeok-21500749/9465/blob/main/a.JPG)

case2
![button](https://github.com/Choi-JaeHyeok-21500749/9465/blob/main/b.JPG)

So keep comparing does two and get the max value in location n in the dp array will be the answer.
         
First approach (Wrong)

I try to use 1d dp array with 1 addtional array, which save the taken location of tha position.

It means that if I select 2 row sticker as a max score in location 4, loc[4] = 2, like this.

However, there are some mistakes. If keep saving the max value in 1d array, There might happen that needed information many not exist in the dp array.

For example, if I want to take the 2 row sticker in (i-2) location, but if in that location taking 1 row sticker is bigger, I loss the max scores of taking 2 row sticker's  in that location.

Second approach

It is simple, just make dp array as 2*n shape and save the max value in that location.

After that max(dp[0][n] , dp[1][n]) will give you the answer.


## Where can I get more help, if I need it?

You can contact me through email, which is 21500749@handong.edu.
Thank you for visiting this github!


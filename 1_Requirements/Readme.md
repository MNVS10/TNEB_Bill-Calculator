# REQUIREMENTS

#INTRODUCTION: 
The TNEB Bill calculator is a calculation oriented project which is used to calculate the electricity bill of the Tamilnadu Electricity Board Consumer. This takes the input such as previous month reading current month reading consumer Number etc. The tool used for writing the code to build this project is Code Blocks. The project is built using multi file approach and can run in multiplatform.

#RESEARCH:
	In current days calculating electricity bills have become a hectic process. It is because most of the people are not aware of the subsidy that are available for the users. Moreover the cost of each unit varies for different type of users and even for same type of user it varies based on the units they consumed.
The feature of the TNEB bill calculator includes
	Total Units consumed
	Bill calculation for:
		Domestic Users
		Commercial Users
		Agricultural Users
	Commercial Users are further classified as
		Industries
		Railway Traction
		Government Educational Institutions
		Private Educational Institutions
		Temporary Construction sites
    
    SWOT Analysis:
	
	Strength: Creative, Easy to use.
	Weakness: Everybody should learn to use this.
	Opportunities: Still in most places we use paper and pen for calculation. So there is a great market for this product.
	Threats: Convincing the customers who already got used to paper pen method.

4’W and 1’H
What: TNEB Bill Calculator
Where: Schools, Industries, Houses etc.
When: Electricity bill Calculation.
Who: TNEB Consumers
How: Calculates from the user input and gives as output.

## Table no: Low Level test plan

|**Test ID**|**Description**|**Status**|
| :- | :-: | :-: |
|L\_01|Electricity bill calculation for Domestic users|Implemented|
|L\_02|Electricity bill calculation for Industrial users|Implemented|
|L\_03|Electricity bill calculation for Agricultural users|Implemented|


## Table no: High Level test plan


|**Test ID**|**Description**|**Status**|
| :- | :-: | :-: |
|L\_01_H\_01|Bill for <100 units users if(units<100)|Implemented|
|L\_01_\_02|Bill for <200 units users if(units>100 && units <200)|Implemented|
|L\_01_H\_03|Bill for <500 units usersE(units>201 && units <500)|Implemented|
|L\_01_H\_04|Bill for >500 units users(units>500)|Implemented|
|L\_02_H\_01|Bill for Industrial Users(units=100)|Implemented|
|L\_02_H\_02|Bill for Government Educational institutions|Implemented|
|L\_02_H\_03|Bill for Private Educational institutions|Implemented|
|L\_02_H\_04|Bill for Railway Traction|Implemented|
|L\_02_H\_05|Bill for Temporary Construction Sites|Implemented|


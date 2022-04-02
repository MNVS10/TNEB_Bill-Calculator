## Table no: Low Level test plan

|**Test ID**|**Description**|**Exp i/P**|**Exp O/P**|**Actual O/P**|
| :- | :-: | :-: | :-: | :-: |
|L\_01|Electricity bill calculation for Domestic users|Choice|SUCCESS|SUCCESS|
|L\_02|Electricity bill calculation for Industrial users|Choice|SUCCESS|SUCCESS|
|L\_03|Electricity bill calculation for Agricultural users|Choice|SUCCESS|SUCCESS|


## Table no: High Level test plan


|Test ID|HL\_ID|Description|Exp input|Exp Output|Actual Output|
| :- | :- | :- | :- | :- | :- |
|L\_01|H\_01|Bill for <100 units users if(units<100)|22 units|0 rupees|0 rupees|
|L\_01|H\_02|Bill for <200 units users if(units>100 && units <200)|195|162|162|
|L\_01|H\_03|Bill for <500 units usersE(units>201 && units <500)|300|530|530|
|L\_01|H\_04|Bill for >500 units users(units>500)|600|2440|2440|
|L\_02|H\_01|Bill for Industrial Users(units=100)|100|985|985|
|L\_02|H\_02|Bill for Government Educational institutions|100|985|985|
|L\_02|H\_03|Bill for Private Educational institutions|100|985|985|
|L\_02|H\_04|Bill for Railway Traction|100|935|935|
|L\_02|H\_05|Bill for Temporary Construction Sites|100|1450|1450|

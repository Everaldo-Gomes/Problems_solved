select cand.name, round((src.math*2 + src.specific*3 + src.project_plan*5)/10,2) as total from candidate cand join score src on cand.id=src.candidate_id order by total desc; 
//round() to round a number.. and with 2 digits after , 

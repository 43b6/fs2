
#define CLASS_AMOUNT    9
#define SKILL_AMOUNT    18
string *class_type = ({
     "fighter",
     "swordsman",
     "shaman",
     "schoalr",
     "taoist",
     "bonze",
   "bandit",
   "dancer",
   "blademan",
   "killer",
   "officer",
   });
string *basic_skill_type = ({
   "array",
   "blade",
   "cure",
   "dagger",
   "dodge",
   "face",
   "force",
   "magic",
   "move",
   "parry",
   "poison",
   "spells",
   "staff",
   "stick",
   "sword",
   "throwing",
   "unarmed",
   "whip",
      });
int *max_lv = ({
    80,80,40,0,70,60,100,20,70,60,20,20,40,40,80,50,100,40,
    100,0,40,0,80,0,60,0,80,100,0,0,0,0,100,0,40,0,
    0,0,100,0,40,60,100,40,40,60,80,0,0,0,40,80,60,0,
    0,40,60,40,90,40,60,40,90,80,60,40,100,80,40,0,60,0,
    80,40,40,40,40,40,40,80,40,40,40,100,40,40,40,40,40,40,
    70,0,60,0,40,0,100,100,40,80,0,80,100,100,60,0,80,0,
    0,100,60,40,60,80,70,40,60,100,60,40,40,40,60,40,60,0,
    60,0,60,80,100,100,40,60,100,60,100,40,0,0,70,100,40,80,
    70,100,20,0,70,0,70,0,70,80,0,0,0,0,0,0,60,0,
    80,80,60,40,80,0,80,40,80,80,0,40,40,40,80,0,80,0,
    });
int test_lv(object me,string skill)
{
   int i,j;
   if(!me->query("class")&&me->query(skill,1)>=60) return 1;
   for(i=0;i<CLASS_AMOUNT;i++)
   if(me->query("class")==class_type[i])
      break;
    for(j=0;j<SKILL_AMOUNT;j++)
     if(skill==basic_skill_type[j]) break;
     if(me->query_skill(skill,1)>=max_lv[i*SKILL_AMOUNT+j])
      return 1;
   else return 0;
}
int reback_skill(object me)
{
    int i,j;
    for(j=0;j<CLASS_AMOUNT;j++)
          if(me->query("class")==class_type[j])  break;
     for(i=0;i<SKILL_AMOUNT;i++)
    {
   if(!me->query("class"))
     if(me->query_skill(basic_skill_type[i],1)>60)
       me->set_skill(basic_skill_type[i],60);
    else
       if(me->query_skill(basic_skill_type[i],1)>max_lv[j*SKILL_AMOUNT+i])
           me->set_skill(basic_skill_type[i],max_lv[j*SKILL_AMOUNT+i]);
    }
   return 1;
}
int valid_learn(object me)
{
   if(test_lv(me,SKILL_N))
       return notify_fail("���ְҵֻ��ѧ�����ֵȼ���\n");
   return 1;
}

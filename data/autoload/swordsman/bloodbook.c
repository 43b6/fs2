inherit ITEM;
void create()
{
set_name("Ѫħ�м�", ({ "bloodbook","book" }));
set_weight(100);                                                                
if( clonep() )                                                                  
set_default_object(__FILE__);                                                   
else {                                                                        
set("unit", "��");                                                             
set("long",
    "����Ѫħ�����ļ��±�, �������������ͼ��, ������ѧ��ѧ������ȫ��ͬ
�������Ǻ��������...\n"); 
set("value", 10);                                                               
   set("no_drop", 1);
   set("no_give", 1);
   set("no_get", 1);
   set("no_auc", 1);
set("material", "paper");                                                      
set("skill", ([                                                      
"name": "blood_sword",                                                         
              "sen_cost":     600,
              "difficulty":   55,
              "max_skill": 99,                                               
// from this object.                                                                                
]));
        setup();
}
}
int query_autoload()
{
  object player;
  if(!environment()) return 0;
  if(!living(environment())) return 0; 
 
  player=environment();
  if(player->query("family/family_name")=="�ɽ���" && player->query("bloodsword") > 1)
    return 1;
  else 
  return 0;
}


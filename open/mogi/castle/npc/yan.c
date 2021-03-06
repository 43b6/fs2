
// by roger

inherit NPC;
#include <ansi.h>
int do_acc();
void create()
{      
        set("title","仙剑派第二代弟子");
        set_name("风青云",({"yan"}));
        set("nickname",HIR"剑如回阳"NOR);
        set("class","swordsman");
        create_family("仙剑派",2,"弟子");
        set("family/master_name","逍遥子");
        set("gender","男性");
        set("age",87);
        set("str",30);
        set("long","他是仙剑派第二代弟子，郑士欣之师叔。\n");   
        set("inquiry",([  
        ]));
        set("combat_exp",1000000);
        set("max_gin",3000);
        set("gin",3000);
        set("max_kee",3000);
        set("kee",3000);
        set("max_sen",3000);
        set("sen",3000);
        set_skill("dodge",400);
        set_skill("unarmed",400);
        set_skill("parry",400);

        setup();
        add_money("gold",5);
}
int accept_fight(object who)
{
 return notify_fail("风青云疑惑的说:你不是来救我吗？\n");
}
int accept_kill(object who)
{
 return notify_fail("风青云疑惑的说:你不是来救我吗？\n");
}
void init() {
  object obj;
  ::init();
  if(interactive(obj=this_player()) && !is_fighting()) 
     {
      remove_call_out("greeting");
      call_out("greeting",1,obj);
     }
add_action("do_recover","recover");
}
void greeting(object ob)
{
        command("hmm");
}
int do_recover(string str)
{
 object me;
 me=this_player();
 if(str!="force"){
   tell_object(me,"你想做什么??\n");
   return 1;
                }
 //增加exp check避免仙剑利用team的方式kill king避开杀king要250 one的限制               
 if(me->query_temp("win_fireking")!=1 || me->query("combat_exp") < 2500000)
 { 
   message_vision("$N以解穴手法在风青云的大穴上点了几下，但毫无效果。\n",me);
   return 1;
 }
 else{ 
   message_vision(HIY"$N以焚天魔王所授的独门解穴法在风青云的大穴上点了几下...\n"NOR,me);
   call_out("quests",1,me);
   return 1;
     }
}

void quests(object me)
{
   write("\n风青云一声大喝，全身骨节山响而起，被点的三元大穴已被全数冲破！\n");
   call_out("mes1",1,me);
}   
void mes1(object me)
{
 if(me->query("family/family_name")=="仙剑派"){
   message_vision(HIY"风青云对$N说：多谢你替我解穴，让我的内力得以再度贯通
周身一百零八大穴。既然是本门弟子，就让我告诉你一件本门
的故事
"NOR,me);
   me->set("quest/sun_fire_sword",1);
   call_out("mes2",2,me);
                                    }
 else {
message_vision(HIY"风青云对$N说：多谢你替我解穴，让我的内力得以再度贯通
周身一百零八大穴。但你我职业不同，我的剑招绝学你也无法
领悟。这样好了，我另外知道另一件护甲宝物的铸法，你去找
魔界村的「李昆阳”告诉他「护甲宝物”的制法，也\许他能帮
你也说不定。
"NOR,me);
  me->set("quest/save_yan",1);
      }
}
void mes2(object me)
{ 
 write("
风青云说：逍遥子祖师曾经发展出另一套剑法绝学，但并没有来得及传完全部
的精髓便告失踪，这些只有基础部分的剑术就是目前的仙剑禁断之连阳七诀。
其实在他失踪前曾把这套剑术写成剑谱，现在就在我的身上。继然你是仙剑弟
子又救过我性命，那这本剑谱就传给你参习吧!(欲知详情请打help 连阳七诀剑法)
\n");

new("/data/autoload/swordsman/sun_sword_book")->move(me);
 me->set("quest/sun_fire_sword",1);
 me->set("title","仙剑派绝代剑侠");
}

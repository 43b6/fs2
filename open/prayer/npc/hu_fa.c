//����
#include <command.h>
#include <ansi.h>
inherit NPC;

void create()
{
	set_name("������",({"hu-fa","fa"}));
    set("title","ʥ��̸ɲ���");
    set("gender", "Ů��");
    set("age",45);
    set("attitude","friendly");
    set("long",@LONG
	ʥ�������ѡ�����Ļ�����ְ��������ʱ������ʥ��̵ĸɲ���.
LONG);

    set("combat_exp",100000);
    set("str",25);
    set("con",25);
    set("int",30);
    set("per",30);
    set("cps",30);
    set("kar",30);
    set("force",1400);
    set("max_force",1400);
    set("force_factor",10);
    set("max_kee",4000);
    set("kee",4000);
    set("limbs",({"ͷ","��","��","��","��","��"}));
    set_skill("force",40);
    set_skill("superforce",40);
    set_skill("stick",50);
    set_skill("move",75);
    set_skill("fire-catch",50);
    set_skill("shift-steps",35);
    set_skill("parry",45);
    set_skill("dodge",40);
    map_skill("move","shift-steps");
    map_skill("dodge","shift-steps");
    map_skill("parry","fire-catch");
    map_skill("force","superforce");
    map_skill("stick","fire-catch");
 
    setup();
    add_money("gold",4);
    carry_object("/open/prayer/obj/tiger-robe")->wear();
    carry_object("/open/prayer/obj/tiger-cape")->wear();
    carry_object("/open/prayer/obj/tiger-stick")->weild();
}
void init()
{

      set_heart_beat(1);
}

void heart_beat()
{
        object me=this_object();
        if(me->query("kee")<0 || !me->is_fighting())
        {
          call_out("leave",0);
          return ;
        }
         :: heart_beat();
}
void leave()
{  
   message_vision (HIG"������˵�����������������и��ˣ�\n"NOR, this_object ());  
  destruct(this_object());
}
int accept_kill(object ob)
{
        int i,j;
        object elder,me,*all;
        me=this_object();
        all = all_inventory( environment(me) );  
        j=sizeof(all);
          for(i=0;i<j;i++)
          {
            if(all[i]->query("id")=="behavior_elder" ||
               all[i]->query("id")=="gonfu_elder" ||
               all[i]->query("id")=="lawyer_elder")
               elder=all[i];
          }                
        if(elder && living(elder) && me)
          elder->kill_ob(ob);
        return 1;
   
}
#include <ansi.h>
inherit NPC;
void create()
{
        object ob;
	set_name("����", ({"mama"}));
	set("long",
"���Ǹ�������һ��޵����¼���������ɣ,�������շǳ�֮��,������
ϲ���������Ĳ�.����������,�ɱ�ʮ����ǰ��ǧ�ֹ��������.
");
	set("gender","Ů��");
	set("combat_exp",90000);
	set("age",50);
	set("title","������Ƴ�");
                set("str", 26);
                set("cor", 20);
                set("cps", 18);
                set("per", 26);
                set("int", 28);
        set("force",1800);
        set("max_force",1800);
        set("force_factor", 8);
	set_skill("unarmed",50);
        set_skill("dodge",80);
        set_skill("force",60);
        set_skill("move",80);
        set_skill("parry",50);
//        set_skill("throwing",95);
//        set_skill("rain-throwing",95);
//        map_skill("throwing","rain-throwing");
//        set_skill("shade-steps",70);
//        map_skill("dodge","shade-steps");
//        set_skill("blackforce",50);
//        map_skill("force","blackforce");
        set("chat_chance", 6);
        set("chat_msg", ({
           "����ɣ ������˵��:������԰���(help)���𣿡�\n",
}));
	setup();
	add_money("silver",90);
        carry_object("/open/center/obj/pant2.c")->wear();
        carry_object("/open/center/obj/cloth3.c")->wear();
        carry_object("/u/p/ppopp/obj/rose.c")->wear();
        ob=carry_object("/open/snow/obj/knife.c");
        ob->set_amount(50);
}
 
void init()
{ 
 add_action("help_mob","help");
}

 int help_mob(string me)
{ 
  if(me=="mama")
 {
  command("ccc");
  command("say ����������,��������ȱ������!!!");
  return 1; }
  return 0; 
}

 int accept_fight(object ob)
{ 
  return notify_fail("����ɣ������æ�����,������û�����㡣\n");;
}
 int accept_kill(object ob)
{ ob ->query("id");
  set("title", "");
  set("nickname", "ǧ�ֹ���");
  set("name",  "�����" );
  set("long",
"����վ������ǰ���ǵ���������֣��ǰ����Ӣ��һͬ��սȺħ��
С����, ��˵������ͬʱ�ӷ���ʮֻ����, ����ǧ�ֹ���, ���
����.
");
  message_vision(HIG"������������ֱ��,�������"HIR"�����"HIG"����!!!\n"NOR,this_player());
  command("stare "+ob->query("id"));
  command("say ��ɱ��??? ��֪������˭��!!!");
  command("wield knife");
  return 1;
}

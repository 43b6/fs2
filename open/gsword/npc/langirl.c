inherit NPC;
#include <ansi.h>
string answer_mo();
void create()
{
	set_name("����", ({ "lan cute girl" , "girl" }) );
	set("race", "����");
	set("inquiry",([
	"��ë":(: answer_mo :)
	]));
	set("age", 17);
	set("gander","Ů��");
	set("long", "����÷Ӱ��СѾ�ߣ�����ͳ���ɽ��ɵ��ӵĹ��͡�\n");                                                                                                                                                                                                          
	set("str", 20);
        set("con",35);
        set("max_force",800);
        set("force",800);
	set("combat_exp", 100000);
        set("sha-stop-5",1);
	set_skill("dodge",35);
        set_skill("sha-steps",70);
	set_skill("shasword",60);
        set_skill("sword",60);
        set_skill("parry",50);
	map_skill("dodge","sha-steps");
	map_skill("parry","shasword");
	map_skill("sword","shasword");
	set("force_factor",5);
	setup();
        carry_object("/open/gsword/obj/sword-1")->wield();               
}

 string answer_mo()
 {
 int mo;
 mo=this_player()->query("bounds",1);
   return sprintf("��������һ��%d����ë ,�ټ��Ͱ�!\n",mo);
  }
                 

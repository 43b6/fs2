inherit NPC;
#include <ansi.h>
string answer_mo();
void create()
{
	set_name("����", ({ "chu young" , "young" }) );
	set("race", "����");
	set("title","�ɽ��ɳ���");
	set("inquiry",([
	"��ë":(: answer_mo :)
	]));
	set("age", 56);
	set("gander","����");
	set("long", "�����ɽ�����Ҫ��ִ�Ƶ����ǵĹ������� ,�й����ɽ�����
�����ᱨ������--֣ʿ��--֮�� ,�����������������еĵ�λ .\n");                                                                                                                                                                                                          
	set("str", 35);
        set("con",35);
        set("max_force",500);
        set("force",500);
	set("combat_exp", 30000);
	set_skill("dodge",35);
        set_skill("sha-steps",50);
	set_skill("shasword",40);
	map_skill("dodge","sha-steps");
	map_skill("parry","shasword");
	map_skill("sword","shasword");
	set("force_factor",5);
	setup();
        carry_object("/open/gsword/obj/sword-1")->wield();
        carry_object("/open/gsword/obj/robe_3")->wear();               
}

 string answer_mo()
 {
 int mo;
 mo=this_player()->query("bounds",1);
   return sprintf("��������һ��%d����ë ,�ټ��Ͱ�!/n",mo);
  }
                 

inherit NPC;
#include <ansi.h>
inherit F_MASTER;
void create()
{
	set_name("�־�ʫ", ({"lin chin-shin", "lin"}));
	set("long","
    �����ǽ��ϸ��¥��¥�����˳ƽ�����һ���˵��־�ʫ��
�־�ʫ������Ե��˶��ٽ�����ʿ������һ˫�������ȵƻ���
�·���һ�������������ǧ�����Ƶ��Ρ�\n");
	set("gender","Ů��");
	set("combat_exp",1000000);
        set("attitude","heroism");
	set("age",21);
	set("class","swordsman");
	set("title","�ɽ��ɵ��Ĵ�Ů����");
        set("nickname",HIW"���Ƿ�ѩ"NOR);
	create_family("�ɽ���",4,"����");
	set("score",100000);
        set("kee",3000);
        set("max_kee",3000);   
	set("force",13000);
	set("max_force"3000);
	set("force_factor",10);
	set_skill("literate",100);
	set_skill("parry",120);
	set_skill("dodge",90);
        set_skill("sha-steps",1000);
	set_skill("force",50);
	set_skill("sword",80);
	set_skill("move",80);
	set_skill("array",70);
	set_skill("cure",50);
        map_skill("sword","shasword");
        map_skill("parry","shasword");
        map_skill("force","shaforce");
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
        map_skill("array","sha-array");
	set("str",30);
        set("cor",30);
	set("per",30);
	set("int",40);
	set("cps",30);
	set("con",30);
	set("spi",35);
	set("kar",30);
	setup();
	carry_object("/open/capital/wind-rain/obj/butterfly-cloth")->wear();
        //carry_object("/open/gsword/obj/may_ring")->wear();
	add_money("gold",5);
}
int accept_fight(object me)
{
  if((int)me->query("combat_exp")<=60000)
 {
    command("say ���巢��,��֮��ĸ,Ҫ�úð�ϧ��!");
    return 0;
 }
    command("say �㵽Ϊֹ�...");
    return 1;
}

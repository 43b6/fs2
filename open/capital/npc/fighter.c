#include </open/open.h>
inherit NPC;
int do_say();
string do_thief();
void create()
{
	set_name("���ֺ���", ({ "fighter" }) );
	set("race", "����");
	set("gender", "����");
	set("age", 33);
	set("class","fighter");
	set("long","����һλ������ĺ���, ���ο���, ��������, ��󴽺�, ���������, "+
        "��Ϊ�˴���һ��������������������������\n");
	set("cps", 5);
	set("str", 30);
	set("cor", 20);
	set("kar",10);

        set( "inquiry", ([
       	  "name"  : "���Ҵ���һ����ҵ����˵�ɡ�",
       	  "here"  : "�����Ǿ��ǰ�, ��ҲΪ��ǰ;���������, ����?",
	  "thief" : (: do_thief :),
        ]));	 	
        set("chat_chance_combat", 20);
        set("chat_msg_combat", ({
	(: this_object(),"do_say" :),
	 }) );
		
        set_temp("apply/attack", 50);
        set_skill("dodge",30);
        set_skill("parry",40);
        set_skill("blade",60);
	set_skill("her-blade",50);
	map_skill("blade","her-blade");
        set("combat_exp",5000);
	setup();
        add_money("silver",1);
        carry_object(CAPITAL_OBJ"Bblade")->wield();
}

string do_thief()
{
	object ob=this_object();
	object me=this_player();
	if( ob->query_temp("show_mark")==getuid(me) )
	{
	  command("say ��Ȼ����Ϊ�참����, С�����ԭԭ�����ĸ������ˡ�");
command("say ����������书�ƺ���ƽ�ϳǶμ�һ�ɵ������񽣣��Ҵ˵����Ҷ�����С�˺�(scar)��");
	  me->set_temp("thief",3);
	  return("�Ҿ�֪����ô����");
	}
	else
	  return("������!!����ҹ��������С��ʱǡ�������������, �������б���������Ķ���, �������ĳ����ҿɾͲ��ܸ���˵��, ��Ҫ�Ը�����ץ������, ������....");
}

int do_say()
{
	object ob=this_player();
	tell_room(environment(this_object()),
	"���ͺȵ����ɶ�!!����"+RANK_D->query_rude(ob)+", �ô�ү������ѵ��!!\n");
}
	
void defeated_enemy(object ob)
{
	say("[36m������Цһ���� : û����Ҳ�ҵ�������Ұ��[0m\n");
        remove_killer(ob);
}        

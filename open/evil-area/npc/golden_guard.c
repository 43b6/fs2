inherit NPC;
#include <ansi.h>

void create()
{
	set_name(HIY"�ƽ�����"NOR,({"golden guard","guard"}));
	set("long","
����������������������а����ʥ��ʥ��, ��������а����Ҫ��,
�ʱ��������ƹ����������������ɱ��Ȩ, ����һ��ֱ��, ������
�������, ��Ȼ����Բ���ȥ��ս��������...\n");
        set("gender", "����" );
	set("combat_exp",1000000);
	set("age",10000);
	set("max_kee",10000);
	set("max_sen",10000);
	set("max_gin",10000);
	set("chat_chance",10);
	set("unarmed",100);
	set("dodge",100);
	set("force",100);
	set("parry",100);
	set("chat_msg",({
"�ƽ��������������лƽ�ӡ���������ͨ����!!\n",
}));
	setup();
}

int accept_object(object me,object ob)
{
	object obj=this_object();
	me=this_player();
	if(ob->query("id")!="golden seal")
	{
		message_vision("
$N���һ�����ơ�!!"+ob->query("name")+"һ˲�仯��һ�ѽ�ɳ����ɢ�Ĵ���\n
$N��ŭ�����ⲻ����Ҫ�Ķ�����!!\n",obj);
		destruct(ob);
		return 0;
	}
	if(!me->query_temp("evil/g_enter"))
	{
		message_vision("
$N���һ�����ơ�!!"+ob->query("name")+"һ˲�仯��һ�ѽ�ɳ����ɢ�Ĵ���\n
$N��ŭ�����ⶫ��Ҫ���Լ���ʵ���õ�!!\n",obj);
		destruct(ob);
		return 0;
	}
	message_vision("
$Nȫ����ҫ�Ž�⡫

$n����������ӭ��$N������$N����ƽ��ź��漴�ֽ��Ź��ϡ�\n",me,obj);
	me->move("/u/f/firedancer/evil-area/e06");
	destruct(ob);
	return 1;
}


void die()
{
object me,ob,obj;
	ob=this_object();
	obj=new(__DIR__"golden_guard");
	me=ob->query_temp("last_damage_from");
	message_vision(HIR"
\n�ƽ�������ŭ�����˹�������а���ġ�ʥ�顳-ͼ�ף�$N����ð���ң���ȥ���ɣ���\n\n"NOR,me);
	message_vision(HIW"$N����������о���Ϊ����һ�Ѽ�������Ļƽ��Ю��������\n
$N�󺰣����ҵġ����۰����ʡ���
$N�ֳֻƽ��ֱ��������࣬�����㲻�������������˺ü���!!\n"NOR,ob);
	me->receive_wood("kee",(int)me->query("kee")/2);
	COMBAT_D->report_status(me,1);
	COMBAT_D->report_status(me,1);
	COMBAT_D->report_status(me,1);
	message_vision(HIY"
$N��һ��ת���ֳֻƽ���ٶ�ֱ�����ͷ���������㲻���������Ѿ����ڵ�Ϧ!!\n"NOR,ob);
	me->set("kee",1);
	me->set("max_kee",1);
	COMBAT_D->report_status(me,1);
	COMBAT_D->report_status(me,1);
	COMBAT_D->report_status(me,1);
	message_vision(HIR"
$N˲��߾ٻƽ�󵶣��ݺݵ�����ľ���һ������\n"NOR,ob);
	me->die();
	obj->move(environment(ob));
	destruct(ob);
}

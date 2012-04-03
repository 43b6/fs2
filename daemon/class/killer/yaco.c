#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;

string askwho();
string askcard();
string askkee();

void create() 
{
            object ob;
            set_name("��������",({"special man","man"}));
            set("long","�������𽭺���һ��ɱ�֣���������ͷĿ��\n");
            set("gender","����");
            set("class","killer");
            set("combat_exp",6000000);
            set("attitude","heroism");
            set("age",50);
            set("str", 99);
            set("cor", 99);
            set("cps", 99);
            set("per", 99);
            set("int", 99);
	    set("kee",4000);
	    set("max_kee",4000);
	    set("gin",1200);
	    set("max_gin",1200);
	    set("sen",1200);
	    set("max_sen",1200);
	    set("atman",1300);
	    set("max_atman",1300);
	    set("mana",1400);
	    set("max_mana",1400);
            set("force",5000);
            set("max_force",5000);
            set_skill("force",100);
            set_skill("move",100);
            set_skill("throwing",100);
            set_skill("shade-steps",120);
            set_skill("rain-throwing",120);
	    set_skill("spells",50);
	    set_skill("magic",60);
            set_skill("dagger",120);
            set_skill("dodge",120);
	    set_skill("shadow-kill",100);
	    set_skill("blackforce",90);
            	map_skill("dagger","shadow-kill");
		map_skill("throwing","rain-throwing");
		map_skill("dodge","shade-steps");
		map_skill("force","blackforce");
		map_skill("move","shade-steps");
		set_temp("apply/armor",70);
		set("force_factor",10);
set("inquiry",([ 
    "����˭" : (: askwho :),
    "�����ɱ��" : (: askcard :),
    "ɱ��ħ��" : (: askkee :),
]));

setup();
// ������趨��Ϊ�ڶ�����ϯ  
//create_family("������",2,"��ϯ");
carry_object("/open/killer/obj/dagger")->wield();
}

string askwho()
{
	if (this_player()->query_temp("head") != 8)
		return "�ߡ��������������˴���Ҳ��������˭��";
	else
	{
		this_player()->set_temp("askwho",1);
		command("say ��������������˭������������Ҳ�ѹ֣�����ʧҲ�Ѿ���ʮ�����˰ɣ�");
		command("say С�ӣ������װ��Ӧ�����������ؼ�ɱ�ְɣ�");
		command("say �ѵ����а취��������ðɣ��Ϸ����Ҷ�³�");
		return "����ʲô�������Ϸ��أ�����Ϊ��(�����ɱ��)��";
	}
}

string askkee()
{
	if (this_player()->query("quest/head-kill") != 1)
		return "�ߡ�����ƾ��Ҳ��ӵ��ɱ��ħ����";
	if (this_player()->query("sec_kee") == "mkill")
		return "����ģ���ˣ��ѽ���㲻����ɱ��ħ������";
	else
	{
		command("say ɵ���ӣ����ҷ���ɱ�ֵ������������Ҵ���ɣ�\n");
		message_vision("$N�����Ĵܳ�һ����������$n���ڡ�\n",this_object(),this_player());
	this_player()->set("sec_kee","mkill");
	}
}
string askcard()
{
	object obj;

	if (this_player()->query_temp("head") != 8)
		return "�ߡ��������������˴���Ҳ������Ҫ�����ɱ�";
	else
	{
		if (this_player()->query_temp("askwho") != 1)
			return "���ֲ�֪������˭����Ȼ������Ҫ�����ɱ��";
		command("nod");
		command("say �ѵ����а취��������͸��������ɱ��ɣ�");
		obj = new("/open/killer/headkill/obj/bluekill.c");
		obj->move(this_player());
		message_vision("$N��$nһ��"+obj->name()+"��\n",this_object(),this_player());
		command("say ���������ɱ��ȥ׷ɱ<ɱ��ȫ��׷ɱ����ͷ>��ʹ�÷���д��������");
		command("say ��Ȼ������������Ϸ�����һ��֮������������ٴ�ͻ��ħ��ɱ�����ư�!");
message_vision("Ҷ�³�Ѹ�����������Ļ���������������������ħ��ɱ�����ٴ�ͻ��",this_player());
		this_player()->set("upkee",1);
		this_player()->set_temp("head",9);
		return "��pass way�Ϳ����뿪���";
	}
}
		
int accept_fight(object ob)          
{
	command("say �������Ҫ������ս��??\n");
	message_vision( this_object()->name()+"����һ�����ӵ����ӡ�\n",ob);
	return 0;
}

int accept_kill(object ob)
{
	command("say û�뵽����������, �Ҹ�����ս!!!\n");
	message_vision( this_object()->name()+"ͻȻ���������ϳ���ɱ����\n",ob);
	this_object()->set("bellicosity",5000);
	command("cmd bellup");
	return 1;
}

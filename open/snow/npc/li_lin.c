#include <ansi.h>

inherit NPC;
  inherit F_MASTER;
string ask()
{
	if( this_player()->query("quests/to-kill-2") != 1 )
		return "����������������������Ƕ�ʮ��ǰ��һλ���ˡ�\n";
	this_object()->set("title","�����޺�");
	command("say ��Ȼ����֪���ˣ���Ͳ��ܻ�����");
	this_object()->set("max_kee",1500);
	this_object()->set("kee",1500);
	this_object()->set("force",3500);
	this_object()->kill_ob(this_player());
	return "ɱѽ !!!!!\n";
}
void create()
{
        set_name("����",({"li lin","lin","li"}));
		set("gender","����");
           set("title","ѩ�����ڼ�����");
	set("combat_exp", 425864);

          set("attitude","heroism");
          set("age",62);
		set("str", 44);
		set("cor", 24);
		set("cps", 18);
		set("per", 24);
		set("int", 42);
           set("force",800);
           set_skill("parry",50);
           set("max_force",800);
	set("inquiry",([
	"�����޺�" : (: ask :),
		"��ɽ" : "��ɽ�Ǳ��ɵĽ��أ��Ǳ��ɹط���֮�ء�\n",
		"��ɽ����" : "��ɽ���������ƺ�����һ����Ҫ�ķ��������档\n",
		]));
            set("force_factor",20);
          set_skill("dodge",40);
            set_skill("force",50);
          set_skill("unarmed",60);
            set_skill("snowforce",50);
           map_skill("force","snowforce");
              set_skill("snow-martial",80);
             map_skill("unarmed","snow-martial");
	set_skill("black-steps",60);
	map_skill("dodge","black-steps");
	setup();
}

void die()
{
	object ob;
	object killer = this_object()->query_temp("last_damge_from");
	if( this_object()->query("title")!="�����޺�" )
		::die();
	ob = new( "/open/snow/obj/corpse" );
	ob->move( environment( this_object() ) );
	if( killer->query("quests/to-kill") ) 
		ob->delete("true-corpse");
	destruct( this_object() );
}

#include <ansi.h>

inherit NPC;

string identy()
{
	object ob;
	if( present("lin sword",this_player()) )
		return "�����ϵ��ǰѽ�����ƾ֤��\n";
	ob = new("/open/snow/obj/lin_sword");
	ob->move(this_player());
	tell_object(this_player(),"����۸���һ�ѽ���\n");
	this_player()->set("quests/to-kill-0",1);
	return "�Ȿ������ƽʱ����Я���ģ��ø������������ŵġ�\n";
}
void create()
{
        set_name("�����", ({ "liu linhwi", "hall", "linhwi" }) );
        set("long",
             "�������ŵ�Ů��,�������Ź�,���Ǳ����Ź��ڽ��������档\n");
        set("attitude", "heroism");
        set("gender", "Ů��" );
        create_family("ѩ����",5,"����");
        set("age", 20);
        set("str", 20);
        set("cor", 20);
        set("cps", 20);
        set("per", 30);
        set("max_force", 300);
        set("force", 300);
        set("force_factor",5);

	set("combat_exp", 24637);

        set("chat_chance", 3);
        set("chat_msg", ({
                "�����˵:������������...\n",
                "�����˵:����Ҳ����̫����,��С�ķ���Ͱ��ҹ�������!\n",
                "�����˵:����Ľ��������ɵĻ...\n",
        }) );


	set("force",300);
	set("max_force",300);
        set_skill("unarmed", 35);
        set_skill("force", 40);
        set_skill("literate", 35);
        set_skill("snowforce", 35);
        set_skill("parry", 35);
        set_skill("dodge", 35);
         set_skill("snow-martial", 20);
        map_skill("force", "snowforce");
	set_skill("black-steps",30);
	map_skill("dodge","black-steps");
         map_skill("unarmed", "snow-martial");
        set("inquiry",([
           "��ȫ��":   "�������ҵ�����\n",
           "��аʯ":   "�ഫ��аʯ��һ����,��ϸ������Ҳ�����,����ʶ��Ϊ����ı���,�Ҿ�����Ϊ��аʯ�ű����������ڴ˴���\n",
	"����": "������˵�����ں�ɽ��������������һ���ˡ�\n",
	"��ν�������" : "�����Ҳ��̫���������������˵Ҫд����ǽ�ϵ�ʯ���ϡ�\n",
	"�����޺�" : "����������ҵ����������������ҵ���֮����Щʲô�ر�Ĺ�ϵ�Ƶġ�",
	"��ȫ��������޺�" : "������ҵ��������أ����ʹ����ü��Σ�������˵��",
	"����" : "Ҫ�ҵ���˵���������غ����������� .....\n",
	"����" : "�Ҹ���ƽ���޹ʰ��㣬��������Ұ��Ƹ��������ҡ�\n",
	"ƾ֤" : (: identy :),
           ]));

        setup();

        carry_object("/obj/cloth")->wear();
}
int ok()
{
	if( this_player()->query("quests/to-kill-0") != 1 ) return 0;
	command("say �Ƹ�� ....");
	command("smile");
	command("smile "+this_player()->query("id"));
	command("say ֻҪ���ҵ����ᵽ�����Źء�һ�ң��ҵ����ͻ�����м�֮�ء�");
	this_player()->set("quests/to-kill-1",1);
}
void init()
{
	object ob;
	object env = environment( this_object() );
	if( (ob = present("dugur",env)) && ob->name() == "������" )
		call_out("ok",1);
}

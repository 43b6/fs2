// �μ� ���� made by onion
#include </open/open.h>
inherit NPC;
void create()
{
	set_name("��Сʫ",({"duan"}));
	set("long","��Сʫ�Ƕ��ƵĶ���Ů, ����վ�ڴ�ǰ, ��ȹ����, ���˴�Ц��\n");
	set("gender","Ů��");
	set("class","scholar");
        set("combat_exp", 4000);
        set("attitude","peaceful");
	set("age",19);
	set("chat_chance", 5);
	set("chat_msg", ({
	"��Сʫ��: ��ʦ����ô��û��������\n",
        "��Сʫ��: ����ѧ��һ���ķ����š��ϵľ���ม�\n",
	}));
	set("inquiry", ([
	"thief" : "���ǵĵ����, �����Ƕμ�ʲô�°�?",
	"scar"  : "�˼�����ʲô�˺۰�, �㲻Ҫ���������ม�",
	"sad_story" : "�˼������, ��ʲô����������..",
        "һ���ķ�����"  : "����ͷ������һ������ม�",
	]));
	set("force",100);
	set("max_force",100);
	set("force_factor", 1);
	set_skill("force",10);
        set_skill("unarmed",30);
	set_skill("sunforce",10);
        set_skill("linpo-steps",30);
        set_skill("six-fingers",20);
        map_skill("force","sunforce");
	map_skill("dodge","linpo-steps");
	map_skill("move","linpo-steps");
        map_skill("unarmed","six-fingers");
        set_temp("apply/dodge",30);
	setup();
	carry_object(PING_OBJ"cloth2")->wear();
	carry_object(PING_OBJ"cape0")->wear();
	add_money("coin",100);
	create_family("�μ�",11,"����");
}


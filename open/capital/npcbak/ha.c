inherit NPC;

void create()
{
	set_name("���ܹ� ����", ({ "master ha","master","ha" }) );
	set("race", "����");
	set("age", 40);
	set("gender", "����");
	set("long",
"�����Ǹ�ͨ�������ٽύ�Ļ��, ��ô������, �ڸ�ͨ������Բ�֪���˶��ٴ��"+
"СС����, ��˵���ͨ�췢���, ���ɸ�����ôһ������, �Ը�л�����͡�\n"
            );
        set( "inquiry", ([
             "name" : "���¹���, ��֪�����к�ָ�̡�",
             "��ͨ��" : "������һ��������������ˡ�",
             		]));
	set("str",22);             

	set("attitude", "friendly");
        set_temp("apply/attack", 50);
        set("combat_exp",10484);
	setup();
        add_money("silver",10);
        
}


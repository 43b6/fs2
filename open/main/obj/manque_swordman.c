// �й��� npc �������趨, �뵽 /doc/build/npc ȥ�ο�
//	manque_swordman.c		designed by dos  95'12
inherit NPC;


void create()
{
	set_name("ʧ�⽣��", ({ "manque swordman", "swordman"}) );
	set("long", "�㿴��һλʧ�⽣��, ����͸©������
������. ��������������, �����Ƿ���
����(story)������. \n");

	// ����
	// ����ϵͳ����������������, �ù���֮�츳������״̬,
	// ��������趨��������䡣
	set("age", 30);

	// �츳, ��ο� help gift
	// set( "����", ��ֵ );		<-- ��ֵ��Χ: 10 - 30
	// ���û���趨, �����������
	set("str",22);
	set("cor", 18);
	set("per", 27);

	// ״̬
	// һ��û�����⼼�ܵĹ���, ��ս������(combat_exp)���������˹����ǿ�ȡ�
	// set( "combat_exp", ��ֵ );
	// set( "score", ��ֵ );
	set("combat_exp", 3000);

	// ����
	// �����Ӱ�칥����ʽ, ��ο� /doc/build/npc �ĵڰ���
	// ���δָ������, ϵͳ�����Զ�ѡ�����ࡣ
	// Ŀǰ��֪����: ����, ������, ��ħ, Ұ�� 
	set("race", "����");

	// �Ա�
	// ������֮��ͬ, ������ϵͳ: 1.����, Ů�ԡ�
	//                           2.����, ����, ���ԡ�
	// �趨��ʽ: set( "gender", "�Ա�" );
	set( "gender", "����");

	// �趨 npc ������ʽ���ܹ�����λ��
	// set( "limbs", ({ "�ܹ���λ1", "�ܹ���λ2", ...}) );
	set("limbs", ({ "ͷ��", "����", "�ֲ�", "�Ÿ�", "����" }) );
	// set( "verbs", ({ "������ʽ1", "������ʽ2", ...}) );
//	set("verbs", ({"bite", "claw" }) );

	// ����
	// ���ǿ����ڹ������趨ĳЩ����, ʹ�õ����ѯ��(ask)�ض�֮
	// �ؼ���ʱ, �������Զ�������Ԥ��֮������
	// �趨��ʽ: set( "inquiry", ([
        //	          "����1" : "��Ӧ֮��\n",
        //	          "����2" : (: this_object(), "���и���ʽ֮��" :)
        //	        ]) );
	set("inquiry", ([
		"story"	:	"��, ��ȥ���¾Ͳ�Ҫ������! \n",

		"����" :	"������û������˵����... \n",
	]) );

        // attitude npc ��ս����Ϊ��ο� /doc/help/attitude
	set("attitude", "heroism");

        set("chat_chance", 6);
        set("chat_msg", ({
        }) );


        setup();
	carry_object("/open/main/obj/manque_shield.c")->wear();
	carry_object("/open/main/obj/manque_sword.c")->wield();
//	carry_object("/open/main/obj/sword_cloth.c")->wear();
}

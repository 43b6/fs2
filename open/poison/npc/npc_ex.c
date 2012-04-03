// ���������� /d/wiz/npc/test.c
// �й��� npc �������趨, �뵽 /doc/build/npc ȥ�ο�
inherit NPC;

string do_ask (object me);
string do_home (object me);
int test();
int random_move();

void create()
{
        set_name("��������Ĳ���Ա", ({ "wade's test man", "man" }) );
        set("long", "�㿴�����ǲ���Ա, �ǲ������(wade)�����\n");

	// ����
	// ����ϵͳ����������������, �ù���֮�츳������״̬,
	// ��������趨��������䡣
	set( "age", 15);

	// �츳, ��ο� help gift
	// set( "����", ��ֵ );		<-- ��ֵ��Χ: 10 - 30
	// ���û���趨, �����������
        set("str", 33);
        set("cor", 30);

	// ״̬
	// ���û���趨, �����������, ��ο� help stats
	set( "gin", 200 );
	set( "force_factor", 3 );

	// һ��û�����⼼�ܵĹ���, ��ս������(combat_exp)���������˹����ǿ�ȡ�
	// set( "combat_exp", ��ֵ );
	// set( "score", ��ֵ );
        set("combat_exp", 100);

	// ����
	// �������Щ�������Ĺ���������ѧ����ʱ, ��õķ�ʽ�����趨���ܡ�
	// �趨��ʽ:
	//		1.����ѧ���ļ���: set_skill( "������", ��ֵ );
	//		2.����ʩչ�ļ���: map_skill( "��������", "������" );

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
        set("limbs", ({ "ͷ��", "����", "ǰ��", "���", "β��" }) );
	// set( "verbs", ({ "������ʽ1", "������ʽ2", ...}) );
        set("verbs", ({ "bite", "claw" }) );

	// ����
	// ���ǿ����ڹ������趨ĳЩ����, ʹ�õ����ѯ��(ask)�ض�֮
	// �ؼ���ʱ, �������Զ�������Ԥ��֮������
	// �趨��ʽ: set( "inquiry", ([
        //	          "����1" : "��Ӧ֮��\n",
        //	          "����2" : (: this_object(), "���и���ʽ֮��" :)
        //	        ]) );
	set("inquiry", ([
	    "wade"	:	"����, ������ʷ����ΰ�������?\n",
	    "god"	:	(: do_ask :),
	    "home"	:	(: do_home :),
	]) );

        // attitude npc ��ս����Ϊ��ο� /doc/help/attitude
        set("attitude", "friendly");

        set("chat_chance", 15);
        set("chat_msg", ({
	    (: this_object(), "random_move" :),
	    (: this_object(), "random_move" :),
	    (: this_object(), "test" :),
	    (: this_object(), "test" :),
	    (: this_object(), "test" :),
	    (: this_object(), "test" :),
	    (: this_object(), "test" :),
	    "����Ա˵��: ��֪����ôд��һ�� npc ��? �����ҵĵ�����֪����\n",
	    "����Ա˵��: ����û���� help npc_example\n",
	    "����Ա˵��: ��ʵ�, /doc �ºܶ����ϵ���\n",
	    "����Ա˵��: д��ʽ����ȫ�ķ����ǲο�����д�õ�����\n",
	    "����Ա˵��: ��ʦ�����֪�� more, cat, cd, wiz �Ǵ�ſ����������ϵ���ɱ��\n",
	    "����Ա˵��: ��, ����������, ������ wiz channel ��, ������ȽϿ�\n",
        }) );

	// ���µĿ����õ� eqs/weapons ��, ����ǿ�� mob ������
	// if armor then �� (+xxx)
	// if /dodge ��enable level
	// if spells ��enable spells level
        set_temp("apply/attack", 15);
        set_temp("apply/damage", 6);
        set_temp("apply/armor", 2);

	if (clonep()) set("startroom", "/u/w/wade/workroom");
        setup();
	return_home (environment(this_object()));
}

//   /std/npc/npc.c ����Ԥ���˼��� function
//   ��ν�� npc ��ʵ��ָ mob & player, Ҳ��������·����ģ������Ľ�ɫ
// object carry_object(string file)
// �� npc ��һ��װ��
//  �ο� /d/npc/sungoku.c
// object add_money(string type, int amount)
// �� npc Ǯ, ������ npc ��ɱ��֮��, ��ҿ��Դ���ʬ���õ�Ǯ
//  �ο� /d/oldpine/npc/bandit.c
// int random_move() ���������� npc ���˹��ػ�ĳ��������Զ�����
//  �ο� ???
// chat_msg  ��ʵ���� chat() �������е�, �����Լ����� chat()
//  �ο� /d/wiz/npc/judge.c
// void cast_spell(string spell)  ������ npc ʩ����
//  �ο� /d/temple/npc/taoist.c
// int exert_function(string func)  ������ npc ʹ���Լ����ڹ��ķ�
//   �ο� /d/waterfog/npc/guard.c
// int perform_action(string action)  ������ npc ʹ���Լ��� skill
//   �ο� /d/snow/npc/girl.c"
// is_fighting() ��������Ƿ�ս����
//   �ο� /d/npc/sungoku.c


// ��������������еĸ��Ӻ���(apply functions)
// void defeated_enemy(object victim)
// ������������һ�����˵�ʱ������������Ӻ�����victim ���Ǳ����ĵĵ������
// ������: COMBAT_D
//   �ο�: /d/snow/npc/sungoku.c
// void killed_enemy(object victim)
// ����������ɱ��һ�����˵�ʱ������������Ӻ���
// ������: COMBAT_D
//   �ο�: /oldpine/npc/spy.c
// int accept_fight(object who)
// ���������������������� fight ָ���ʱ�򣬻����������Ӻ���
// ������: "fight" ָ��
//   �ο�: /d/npc/sungoku.c
// int accept_object(object who, object item)
// �������� give ָ��������������ﶫ��ʱ�������������Ӻ���
// ������: "give" ָ��
//   �ο�: /d/snow/npc/dog.c
// void recruit_apprentice(objct apprentice)
// ��һ������������һ������������ʱ�����������Ӻ�����
// ������: "apprentice" ָ��
//   �ο�:   ????

string do_ask (object me)
{
/*
  if (!arg)
    return "��������ʲô��?!\n";
*/

  return "�ѵ��㲻֪����ΰ������ǲ������(Wade)��?\n";
}

int test ()
{
  tell_room (environment(this_object()),
             "����Ա˵��: hahaa......I am a super test man...\n");
  ::random_move();
}

int random_move ()
{
  tell_room (environment(this_object()),
             "����Ա˵��: ������...\n");
  ::random_move();
}

string do_home (object me)
{
  this_object()->return_home("/u/w/wade/workroom");
  return "����Ա˵��: �һؼ҆�\n";
}

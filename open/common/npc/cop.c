#include <ansi.h>

#include <login.h>
inherit NPC;

string do_ask (object me);
int random_move();

void create()
{
        seteuid (geteuid());
        set_name("��ʡ��Ѳ��--����", ({ "cop head", "cop", "head" }) );
	set("nickname", "�����Ὥ");
        set("long", @LONG
��ǰ��λ�ǽ�������������ɫ��ľ�ʡ��Ѳ��������������Ὥ
�������ɲ��Ǿ�ʡ��Ѳ������ɱ�˷��ͺ���ݴ����������Ὥ��ذ�
�ְ��ţ��������н�����һ����ʡ��Ѳ�����ϣ��Ӵ������������
���Ὥ����ԶҲ���ð�����
    ���������������ս������ɵ�С���������ȡ�������ı�����
�Ρ���ʮ����ǰ��Ϊ��׷��������--��������--��һ������������
���ҹ��˯�����ڴ��׵ļв�����ĺ��������Ǹ�������������
�ġ��������֪����˭��������׷���Ľ�����, ���������й�ɱ��
(killer)���¡�
    �㿴���ܲ�ͷ�ڴ���װ�˲��ٽ��ƣ��ѵ��Ǿ��������� PK ִ��
(pk license)��? Ҳ������Ը�������(apply) һ��������Ŷ!
LONG
	);

	set( "age", 55);

        set("max_gin", 5000);
        set("max_kee", 5000);
        set("max_sen", 5000);
        set("max_atman", 9999);
        set("atman", 9999);
        set("max_force", 5000);
        set("force", 5000);
        set("max_mana", 5000);
        set("mana", 5000);

        set("str", 100);
        set("cor", 100);
        set("cps", 100);
        set("spi", 100);
        set("int", 100);
        set("con", 100);

	set( "force_factor", 3 );
        set("combat_exp", 5000000);
        set_skill("staff", 100);
        set_skill("unarmed", 100);
        set_skill("parry", 100);
        set_skill("dodge", 100);

        set_temp("apply/attack", 100);
        set_temp("apply/defense", 100);
        set_temp("apply/armor", 100);
        set_temp("apply/damage", 100);

	// ����
	//		1.����ѧ���ļ���: set_skill( "������", ��ֵ );
	//		2.����ʩչ�ļ���: map_skill( "��������", "������" );
	// set_skill("celestial", 10);
	// map_skill("force", "celestial");

	set("race", "����");

	set( "gender", "����");

        set("limbs", ({ "ͷ��", "����", "�ҽ�", "���", "ǰ��", "��" }) );
        set("verbs", ({ "bite", "claw" }) );
	set("random_move",-1);
	set("chat_msg_combat", ({
	    CYN "��ʡ��Ѳ��˵��: ����Ͷ����?!\n" NOR,
	    CYN "��ʡ��Ѳ��˵��: ��������˵��һ��, ����Ϊ����֤����\n" NOR,
	    CYN "��ʡ��Ѳ��˵��: �˳��������, ˭���޹�?!\n" NOR,
	    CYN "��ʡ��Ѳ��˵��: ��������, ���سɷ�, �Թ������ɡ�\n" NOR,
	}) );

	set("inquiry", ([
	    "killer"	:	(: do_ask :),
	    "ɱ��"	:	(: do_ask :),
	]) );

        set("chat_chance", 6);
        set("chat_msg", ({
	    CYN "��ʡ��Ѳ��˵��: ����ƽ���ɱ�˷Ż�����ˡ�\n" NOR,
	    CYN "��ʡ��Ѳ��˵��: ��, Ϊ��׷��������������ɱ�����ء�\n" NOR,
	    CYN "��ʡ��Ѳ��˵��: �Ҳ������˭�����?\n" NOR,
	    CYN "��ʡ��Ѳ��˵��: ż����������Ҳ�Ͱ���, ��ɱ��ม�\n" NOR,
	    CYN "��ʡ��Ѳ��˵��: ����Ϊ��ʡѲ���ǽмٵġ�\n" NOR,
	    CYN "��ʡ��Ѳ��˵��: ��֪�������Ὥ��������?\n" NOR,
        }) );

        set_temp("apply/armor", 2);

        setup();
}

int random_move ()
{
  tell_room (environment(this_object()),
             CYN "��ʡ��Ѳ��˵��: ������...\n" NOR);
  ::random_move();
}

// ���������������������� kill ָ���ʱ�򣬻����������Ӻ���
int accept_kill(object who)
{
  object	me;
  string	pker;

  me = this_object();
  pker = who->query("id");

  // �� PK ִ�վͲ���׷ɱ....
  if (present ("pk license", who)) {
    say("��ʡ��Ѳ��˵��: ��Ȼ����ϲ��ɱ��, ����ֻ�÷��㡣\n");
    ::accept_kill(who);
    return 1;
  }

  if (!wizardp(who)) {	// ����ʡ��Ѳ��? ��Ҫ������?
    if ( !PK_D->get_pk_time ( pker ) ) {
      if (PK_D->add_pker (pker, time()))
        message("system",
                CYN"��ʡ��Ѳ�������е�: "+who->short()+
                "���ҹ�Ȼ���跨��������ս!!\n"+
                "��ʡ��Ѳ�������е�: ���������Ὥ�ĵ����ű�֤,"+
	        " ��ץ���鰸�Ĳ��ɷ�!!\n"NOR,
                users()
        );
    }
    else {
      message("system",
              CYN"��ʡ��Ѳ�������е�: "+who->short()+
              "�⽭���������Ҳ��ҿ�����, �������ҵ���!!\n"+
              "��ʡ��Ѳ�������е�: ���������Ὥ�ĵ����ű�֤,"+
              " ��ץ���鰸�Ĳ��ɷ�!!\n"NOR,
              users()
      );

    }
  }
  return 1;
}

// �������� give ָ��������������ﶫ��ʱ�������������Ӻ���
int accept_object(object who, object item)
{
  string	pker;

  if (item->query("id") == "pk license") {
    destruct (item);
    tell_object (who, "��ʡ�ܲ�ͷ������: �ú���, ���������������˰�!!\n"+
		      "�ܲ�ͷ������, ˵��: �ð�, �Ұ��㱣�� PK ִ�ա�\n");
  }
  else
    tell_object (who, 
      CYN "��ʡ��Ѳ��������: �����¸��? �Ѳ�������ҿ���̰������?!\n" NOR);

  return 1;
}

// ����������ɱ��һ�����˵�ʱ������������Ӻ���
void killed_enemy(object who)
{
  if ( PK_D->delete_pker (who->query("id")) ) 
    shout (CYN"��ʡ��Ѳ�������е�: ����������"+who->name()+"("+
           who->query("id")+")һ����\n");
}

string do_ask (object me)
{
  string	pkers, *pklist;
  int		i;

  pklist = PK_D->query_pk_list();
  if (sizeof (pklist)) {
    pkers = "\n";
    for (i=1; i<=sizeof (pklist); i++)
      pkers += i+" "+pklist[i-1]+"\n";
    return pkers;
  }
  else return CYN "���������Ȼ������ӿ, ���Ǻ�����ƽ, ����ƽ����\n" NOR;
}

void init ()
{
  object	ob;

  ::init();

  // ��һ������ init ��� call_out ��ÿһ������������Ƿ������ܹ���..
  // ע��, remove_call_out ��Ϊ�˼��� bug....��������־þ� call_out 
  // һ�ε���˵����Ҫ, ���� ����, ��Ѫ�ж���.....
  if ( interactive (ob=this_player()) && !is_fighting(ob)) {
    remove_call_out ("greeting");
    call_out ("greeting", 1, ob);
  }
  add_action ("do_apply", "apply");
}

void greeting (object who)
{
  object	ob;

  if (!who || environment(who) != environment()) return;
  if (PK_D->get_pk_time(who)) {	// ������һ��
    message_vision ("$N�ȵ�: $n, �������������㵹ù, ��������!!\n",
		    ob=this_object(), who);
    ob->kill_ob(who);
    command("follow "+who->query("id"));
  }
}

int do_apply (string arg)
{
  if (!arg || arg != "license") {
    write ("��ʡѲ��������: ��������ʲô? PK ִ���� pk license ��!\n");
    return 1;
  }
  message_vision ("$N���ʡ��Ѳ��������һ�ţУ�ִ�ա�\n", this_player());
  new(PK_LICENSE)->move(this_player());
  return 1;
}

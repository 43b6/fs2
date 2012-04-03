#include "/open/open.h"

inherit F_VENDOR;

string do_ask ();

void create()
{
	set_name("���������", ({ "old man", "man" }) );
	set("nickname","����");
	set("gender", "����" );
	set("age", 62);
	set("combat_exp",54);
	set("long", @LONG
��������һλ����ˮ�����ˣ����������ӣ�Ӧ����������˪��
���������ˣ�������������һ����������֪��ʲô���á�
LONG);

	set("vendor_goods", ({
	    MAIN_OBJ"bento",
	    MAIN_OBJ"tea",
	}) );

	set("greeting_msg", ({
 	    "����˵��: ���������Ȱ�!\n",
	}) );
	set("chat_chance", 8);
	set("chat_msg", ({
	    "����˵��: �Ը�����������Ӳ�����ǲ��еġ�\n",
	    "����˵��: ��ϧ��֪��������������ɫ��ζ���ɺ�ҩ��\n",
	    "����˵��: �����Ǹ��ú���������þ��ˣ�һ���趼��ȹ��ˡ�\n",
	    "����˵��: ˭��֪�����������Ƿ�â��¶�ġ�\n",
	    "����˵��: ������֪���ɺ�ҩ��? ���Ұ����Ҳ�����\n",
	}) );
	set("inquiry", ([
	    "Ӳ��"	:	"���������԰ɣ�Ӳ��������ҩ�ĺá�",
	    "��"	:	"���ģ���һ����ɡ�",
	    "��������"	:	"�������£����Գ�Ϊ�������ֵģ��ҿ�ֻ���������˰ɡ�",
	    "����"	:	"�һ��߽��֡�",
	    "�޷���"	:	"��������ǿ޷�������?",
	    "�ɺ�ҩ"	:	"�����������֪��Ҳ���ǣ�����������Ҳ�������ġ�",
	    "�ú�"	:	"����������һ���������������˵���Ǵ�˵�е������졣",
	    "������"	:	(: do_ask :),
	    "����������":	(: do_ask :),
	]) );
	setup();
	carry_object(CENTER_OBJ"cloth1")->wear();
	add_money("silver", 10);
}

string do_ask()
{
  object	ob, env=environment(this_object());

  if (!ob=present("day", env)) {
    ob = new(MAIN_NPC"day");
    if (ob) ob->move(env);
    if (random(2))
      return "�꣬���ƣ����������Ƕ���?!....С���������ǰѽ���\n";
    else
      return "���ٿ���ϸ�������������Ա�?\n";
  }
  return "�������������������أ�����С��һЩӦ���ɡ�\n";
}

int accept_fight(object me)
{
  return notify_fail ("����˵��: �����Ұɣ�����ѹ�ͷ���ﻹ�ܲ��н�������\n");
}

void die()
{
  object	me;

  me = this_object()->query_temp("last_damage_from");
  if (!me) me = this_object();
  tell_object(me, "...............\n");
  if (me->query_temp("quests/badman_license")) {
    tell_room(environment(),
	sprintf ("��%s���������һ��ֽ������֪��ʲô������\n",
	this_object()->name()) );
    new(MAIN_OBJ"paper")->move(environment());
    tell_room(environment(), sprintf ("%s��ɱ���ˡ�\n",
	this_object()->name()));
  }
  ::die();
}

#include "/open/open.h"
inherit NPC;

void create()
{
        set_name("��ԯ����", ({ "san guan", "guan" }) );
        set("race", "����");
        set("gender", "����");
        set("age", 38);
        set("long", @LONG
���Ƕ��ͽ��ԯ���⣬ÿ��һ����ȥ������⵱������ѹ��ǲ���
���ֵġ���������ȴ��������������Ψһֵ���԰��ģ�������ֻҪ
һ����ȥ���ǵöԷ����䲻�ɣ���Ҳ�Ƕ��ͽ�ƺŵ���������������һ
���ŵ㣬�Ӳ����ˡ�
LONG);
        set("attitude", "peaceful");
        set("str", 27);
        set("cor", 25);
	set("combat_exp", 1689);
        set("chat_chance", 8);
        set("chat_msg",({  
		"��ԯ����˵��: ���������ҵ�һ�����������ˡ�\n",
		"��ԯ����˵��: ˭��������һ����������\n",
		"��ԯ����˵��: �Ĳ�����Ҫ������Ӯ��ƾ���£���Ҫ�����\n",
		"��ԯ����˵��: ���������Ѿ�û���������ˡ�\n",
        }));
        set("inquiry", ([
	"��������"	: "����Ϊ�����һ������? ��ɵ��, ���Ǹ��Ҷ�һ�֣�",
	"�����"	: "�ϻ�, ��Ȼ����˭Ը�����İ�!",
	"��������"	: "�������ϰ�����ҵ��ģ���Ȼ�������֮����",
	"����"		: "��������������һ�������¡�",
	"��Ӯ��ƾ����"	: "С�ӣ��Ѳ����㲻���Ĳ���أ��������ˣ�",
	"����"		: "˭˭˭? ˭��������ȥ������!",
	"����"		: "С��, ���һ����? ������, �ش���! Ҫ��Ҫ��һ��?",
	"�Ĳ�"		: "�Ĳ����������ֵ��ˣ���Ը����ұ�һ���𣿿��ش�",
	"��һ��"	: "��һ��? ֻҪ�ش� yes or no �Ϳ����ˡ�",
	"�ش�"		: "���� answer y ���� answer n ��!",
        ]) );
        set_temp("apply/attack", 20);
        set_temp("apply/damage", 3);
        set_temp("apply/armor", 4);
	set_skill("dodge",30);
	set_skill("parry",40);
 
        setup();
}

void init()
{
  add_action("do_answer", "answer");
}

int do_answer(string arg)
{
  object	me=this_player();
  int		value;

  printf ("%O\n", arg);
  if (arg == "n" || arg == "no" ) return
	notify_fail ("��ԯ����˵��: ��Ҫ������, �����������ġ�\n");
  else if (arg == "y" || arg == "yes") {
    say ("������һ��ͭ��, ��������滹�Ƿ���?\n");
    return 1;
  }

  if (arg == "������" || arg == "����") {
    if (me->query_temp("quests/gamble_book") == 2) {
	message_vision("��ԯ����˵��: $N��˵������, ����������һ���ܰ���"
		"���ǹԹ��ٶ�һ�����԰�?!Ҫ��Ҫ����һ��?",
		me);
	return 1;
    }
    else {
	message_vision("��ԯ����˵��: ����? �Ĳ��Ĺ�����ǻ᲻�ᰡ!"
		"��˵����, ����������, ��!\n",
		me);
	return 1;
    }
  }
  value = random(2);
  if (arg == "����" || arg == "��")
    if (value) {
	if (me->query_temp("quests/gamble_book"))
	  me->set_temp("quests/gamble_book",2);
	message_vision("��ԯ����˵��: ��! ���Ƿ���, $N������ʹ���!\n", me);
    }
    else say ("��! �Ƿ���, �������ʹ���!\n");
  else if (arg == "����" || arg == "��")
    if (value) say ("��! ������, ��·���ʹ���!\n");
    else {
	if (me->query_temp("quests/gamble_book"))
	  me->set_temp("quests/gamble_book",2);
	say ("��! ��������, ��·���ʹ���!\n");
    }
  else {
    message_vision("��ԯ����˵��: ��ʲô����ֱ��˵�ͺ���, ������ô���� :)\n",
	me);
    return 1;
  }
  say ("����, Ը�ķ���, ��������, Ҫ��Ҫ����һ��?\n");
  return 1; 
}

void die()
{
  object        me;

  me = this_object()->query_temp("last_damage_from");
  if (me) {
    if (me->query_temp("quests/gamble_book") >= 2) {
      message_vision("��ԯ����˵��: �ð�, ������, ����˵��, Ϊ��������, �Ұ�"
	"����֮�ز��������ĳ���ط����б������Լ��ҳ�����\n",
	me);
      me->set_temp("quests/gamble_book", 3);
    }
  }

  ::die();
}

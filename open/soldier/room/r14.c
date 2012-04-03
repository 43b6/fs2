
inherit ROOM;

void create()
{
        set("short", "ս����");
	set("long", @LONG

    �������涼��ǽ���ϵ���·�ľ�ͷ����??��ͻȻ����
������΢΢�ĵƹ⣬Ī�����滹��·�ߡ����۾�����һ��
�������Ա�������(cord)ͨ�����棬����ǰҲ��һ����¥
��(stairs)ͨ�����棬����һ��ǽ(wall)�ر�ͣ���ʱ��
��������������ת�۵��ˡ�����

LONG
);

  set("exits", ([ /* sizeof() == 2 */
    "northeast" : __DIR__"r11",
]) );
  set("item_desc", ([ /* sizeof() == 3 */
  "cord" : "һ��ϸϸ������,���������(creep)����\n",
  "wall" : "һ��߶�ͦ�εİ�ǽ,���������(mount)����\n",
  "stairs" : "һ���ߴ������,���������(upper)����\n",
]));

  set("light_up", 1);
  setup();
}

void init()
{
  add_action ("do_creep","creep");
  add_action ("do_upper","upper");
  add_action ("do_mount","mount");                                                                                                                    
}

int do_creep (string str)
{
  object	me;
  if (!str || (str != "cord" && str != "��" && str != "����"))
    return notify_fail("�㷢���Լ����ɲ�..��Ҫ�ϵ��Ծ��ˡ�\n");

  me = this_player();
  message_vision("$N����ץס������ʹ����������ȥ��\n", me);
  message_vision("û���$N�ֵ������ˡ�����\n", me);
  me->move(__DIR__"r14"); 
  return 1;
}
 
int do_upper (string str)
{
  object	me;
  if (!str || (str != "stairs" && str != "��¥��" && str != "¥��"))
    return notify_fail("���Ƕ�λ̫����??\n");

  me = this_player();
  message_vision("$N�����̤��¥�ݣ�������������ȥ��\n", me);
  message_vision("$N����¥�ݹֵֹ�..��һ���������㽶������ڵ����ˡ�����\n", me);
  me->move(__DIR__"r14");
  return 1;
}
int do_mount (string str)
{
  object	me;
  if (!str || (str != "wall" && str != "ǽ"))
    return notify_fail("�㷢���Լ��ֲ���֩����..��������ȥ��\n");

  me = this_player();
  message_vision("$N��ڻ�����������������Ѹ������С�\n", me);
  message_vision("$N����һ���Ȼ�����Լ��������񡫡�����\n", me);
  me->move(__DIR__"r19");
  tell_room(environment(me), sprintf ("%s����������������\n",
	me->short()), me);
  return 1;
}

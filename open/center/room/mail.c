// copy from Room: /open/wiz/post_office.c

inherit ROOM;

void create ()
{
  set ("short", "������ָ������鲿");
  set ("long", @LONG
����һ��ʮ�����ҵķ��䣬���������˸������������飬������ʡ
��ͨ�档�������д�Ÿ�Զ����������ѣ��������˵ذ����������ҵ
����������������ÿɿ������Բ��ص����������ʧ��
    ǰ������һ��ľ��(sign)�������ƺ����֣��㲻�����������ơ�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/center/room/biau",
]));

  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "������д����

          ����ҵ�����˵���顣

",
]));

  set("light_up", 1);

  setup();
}

int valid_leave(object me, string dir)
{
        object mbox;

        if( mbox = me->query_temp("mbox_ob") ) {
                tell_object(me, "�㽫˵������ϸ��\�źá�\n");
                destruct(mbox);
        }
        return 1;
}

void init()
{
  object mbox;

  seteuid(getuid());

  if( !this_player()->query_temp("mbox_ob") ) {
    mbox = new(MAILBOX_OB);
    if (mbox->move(this_player()))
      write ("�ƹ��һ����̤������, ���Ϲ����ݸ���һ��˵����\n");
  }

  add_action ("do_home", "home");
  add_action ("do_goto", "goto");
}

int do_home(string arg)
{
  object mbox, me;

  me = this_player();
  if( mbox = me->query_temp("mbox_ob") ) {
    tell_object(me, "�㽫˵���齻����վ��\n");
    destruct(mbox);
  }
  
  return 0;
}

int do_goto (string arg)
{
  object mbox, me;

  me = this_player();
  if( mbox = me->query_temp("mbox_ob") ) {
    tell_object(me, "�㽫˵���齻����վ��\n");
    destruct(mbox);
  }
  
  return 0;
}

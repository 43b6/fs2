// copy from Room: /d/snow/postoffice.c

inherit ROOM;

void create()
{
        set("short", "��ʦר���ʾ�");
        set("long", @LONG
    �ʾ��ſ�������һ��ľ��(sign)������д��Щ�֡�
LONG
        );
        set("item_desc", ([ /* sizeof() == 1 */
	    "sign" : "������д����

          ��ʦר���ʾ�

",
]));
        set("exits", ([ /* sizeof() == 1 */
                "east" : "/open/wiz/hall1",
        ]));

        setup();
}

int valid_leave(object me, string dir)
{
        object mbox;

        if( mbox = me->query_temp("mbox_ob") ) {
                tell_object(me, "�㽫���佻����վ��\n");
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
      write ("[�ʾ�]: ����С�㿴��һ����, ������һ������\n");
  }

  add_action ("do_home", "home");
  add_action ("do_goto", "goto");
}

int do_home(string arg)
{
  object mbox, me;

  me = this_player();
  if( mbox = me->query_temp("mbox_ob") ) {
    tell_object(me, "�㽫���佻����վ��\n");
    destruct(mbox);
  }
  
  return 0;
}

int do_goto (string arg)
{
  object mbox, me;

  me = this_player();
  if( mbox = me->query_temp("mbox_ob") ) {
    tell_object(me, "�㽫���佻����վ��\n");
    destruct(mbox);
  }
  
  return 0;
}

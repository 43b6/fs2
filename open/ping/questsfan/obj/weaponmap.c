//weaponmap......  by dhk 2000.5.12
#include <ansi.h>
#include </open/open.h>

inherit BOOK;

#define BOOK_PATH "/open/ping/questsfan/obj/"
#define BOOK_NAME "weaponmap"
#define BOOK_NAME1 "weaponmap1"
#define C_BOOK_NAME ""HIC"Ʈ�����������ͼ"NOR""

void create()
{
  seteuid(getuid());
  ::create();
  set_name( C_BOOK_NAME, ({ "weaponmap" }) );
  set( "long", "����һ����ǰ�����ֱ�ʤ���þ���Ѫ����д��Ʈ�������ͼ���������(read)���ۿ���\n");
  set ( "value", ({ 10, "silver" }) );   //��ֵ
  set ( "book_path", BOOK_PATH + BOOK_NAME );
  setup();
}
int do_read( string arg )
{
       object me = this_player();
       int level=(int)(me->query_skill("literate",1));
        if(me->query("family/family_name")=="�μ�" && level >= 120)
       {
       cat( sprintf("/open/ping/questsfan/obj/weaponmap1") );
       return 1;
       }
       else
       tell_object(me,"���������д��̫��£��������������\n");
       return 1;
}

void init()
{
  add_action("do_make","make_sun_cloud_fan");
  add_action("do_read","read");
}
int do_make()
{
  object me = this_player();
  object fan=new("/data/autoload/scholar/finger_fan.c");
  string record,file;
  int sun=(int)(me->query_skill("sunforce",1));
  int force=(int)(me->query_skill("force",1));
if (!present("finger fan"))
{
  if ( me->query("family/family_name") =="�μ�" && sun >= 120 && force >=80 && me->query("combat_exp") >= 2000000 && present("hon diamond stone"))
  {
  tell_object(me,""HIY"�㻨������ʱ�������ڰ�Ʈ����������ˡ�"NOR"\n");
  tell_object(me,""HIC"����һ��Ҫ��Ʈ���ȸ����Ƽ���һ�©zshow_fan_to_duan�{����!!!һ��Ҫ��ô����"NOR"\n");
  me->set("marks/fan-finger",1);
  fan->move(me);
  record=me->query("name")+"("+getuid(me)+")ȡ��Ʈ������"+ctime(time())+"!!!\n";
  file="/open/ping/questsfan/fan_record";
  CBIP_D->record(record,file);

  destruct(present("hon diamond stone"));
  destruct(present("weaponmap"));
  }
  else
    return notify_fail("���������������\n");
}
else
  return notify_fail(""HIM"������켸��???????"NOR"\n");
  return 1;
}


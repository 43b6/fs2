//posthumous_paper......  by dhk 2000.5.12
#include <ansi.h>


inherit BOOK;

#define BOOK_PATH "/u/d/dhk/questsfan/obj/"
#define BOOK_NAME "posthumous"
#define BOOK_NAME1 "posthumous1"
#define C_BOOK_NAME ""HIR"մѪ������"NOR""

void create()
{
  ::create();
  set_name( C_BOOK_NAME, ({ "posthumous" }) );
  set( "long", "����һ��������ǰ����д�����飬�������(read)���ۿ���\n");
  set ( "value", ({ 10, "silver" }) );   //��ֵ
  set ( "book_path", BOOK_PATH + BOOK_NAME );
  setup();
}

int do_read(string arg)
{
       object me = this_player();
       int level=(int)(me->query_skill("literate",1));
       int sun=(int)(me->query_skill("sunforce",1));
        if(level >= 120 && sun >=120 )
       {
       me->set_temp("buy_ok",1);
       cat( sprintf(__DIR__"posthumous") );
tell_object(me,"����һ��"HIR"մѪ������"NOR"�󣬺�Ȼ��Ѫ���ڡ�������塣\n\n");
tell_object(me,""HIR"�����ǰһ�ڣ�����ʲôҲ��֪����...."NOR"\n\n");
me->set_temp("can_not_do_anything",1);
  tell_object(me,"���Ȼ������"HIC"��ڤ��"NOR"�е�"HIM"����ڤ��˷����"NOR"���������ơ�\n\n");
tell_object(me,"���������Ժ���֮�У����Ȼ����һλ������񡢳�������\n"
              +"���������ӡ�����������˵���ˣ���˵�����������羧�ţ�\n"
              +"ֻ����ÿһ��ʱ��֮һ�̡����̡��������Լ���һ��ʱ����\n"
              +"��ǰ������Ӷ��ѣ�����������Щʱ���������Ż����ա���\n"
              +"��������£�����ȫ���䣬������������Ӱ������ʧ���١�\n"
              +"������Ҫ������ʱ��Ӳ���������ҵĹ۲죬�羧�Ÿ����״\n"
              +"����Ȼ��һ���Ĺ��򣬾��������ڵ�ʱ�������У������Ӱ\n"
              +"����Ϊ���������ÿһ����ֽ���..�ҾͰ��ҵľ��������\n"
             +"....�����е�Ӱ�������ķ�ʱ��\n"
             +"      ���Թ�����ʱһ��������ʵ�ľ���λ��������������\n"
             +"      ���Թ�����ʱ����һ����ʵ�ľ���λ��������������\n"
             +"      ���Թ�ʮ��ʱ����������ʵ�ľ���λ���ڶ���������\n"
             +"....�����е�Ӱ��ֻ����ʮ�Ⱦ͵����ķ�ʱ��\n"
             +"      ���Թ�����ʱһ���߷���ʵ�ľ���λ��������������\n"
             +"      ���Թ���ʮʱ���������ʵ�ľ���λ���ڶ���������\n"
             +"      ���Թ�ʮ��ʱ����������ʵ�ľ���λ��������������\n"
             +"....�����е�Ӱ��ֻ��ʮ��Ⱦ͵����ķ�ʱ��\n"
             +"      ���Թ��ڰ�ʱһ�̾ŷ���ʵ�ľ���λ���ڶ���������\n"
             +"      ���Թ�ʮһʱ����������ʵ�ľ���λ��������������\n"
             +"      ���Թ�ʮ��ʱ���������ʵ�ľ���λ��������������\n"
             +"����С��˫�������.....\n"
              +"�������Ծ��ڴ�...��\n"
              +"�����أ�����\n"
              +"�����أ�����\n");
tell_object(me,"���������Ӱ����ģ������ʧ�ˡ�\n\n");
tell_object(me,""HIY"������������������֪��...."NOR"\n\n");
me->set_temp("can_not_do_anything",0);       
tell_object(me,"��һ����������һ�㡣\n");
       return 1;
       }
       else
       if(level >= 90 )
       {
       me->set_temp("buy_ok",1);
       cat( sprintf(__DIR__"posthumous") );
       return 1;
       }
       else
       tell_object(me,"�����ҿ����ǿ��������ŵ����ݣ�����Ҫ��ȥ���޽��ކ�!!!\n");
       return 1;

}


inherit ITEM;
#include <ansi.h>
void create()
{
        set_name(HIW "Ʈ���Ĵ�˵" NOR,({"story paper","paper"}));
        set("long","����һ�������������������鱨���������(read)���ۿ���\n");
        set("unit","��");
set("no_get", 1);
set("no_auc",1);
set("no_put",1);
set("no_give", 1);
set("value",10000000);
        setup();
}
void init()
{
        add_action("do_read","read");
}
int do_read( string arg )
{
       object me = this_player();
       int level=(int)(me->query_skill("literate",1));
       if(level >= 90 )
       {
       me->set_temp("buy_ok",1);
       cat( sprintf(__DIR__"paper1") );
       return 1;
       }
       else
       tell_object(me,"�����ҿ����ǿ��������ŵ����ݣ�����Ҫ��ȥ���޽��ކ�!!!\n");
       return 1;
}


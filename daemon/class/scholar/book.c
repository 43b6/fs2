inherit ITEM;
#include <ansi.h>
void create()
{
        set_name(HIW "��������" NOR,({"war book","book"}));
        set("long","�������ŵı��䡸�������������������(read book ҳ��)���ۿ���\n");
        set("unit","��");
set("no_get", 1);
set("no_auc",1);
set("no_put",1);
set("no_give", 1);
        set("value",1);
        setup();
}
void init() 
{
        add_action("do_read","read");
}
int do_read( string arg )
{
        int page;
        if( !arg || sscanf( arg , "book %d" , page ) != 1 ) return 0;
        if( page < 1 || page > 37 ) return notify_fail("û����һҳ��\n");
        if( file_size(sprintf(__DIR__"plan/plan-%d",page)) < 0 )
                return notify_fail("��򲻿���һҳ��\n");
//      if( page != 1 )
//      if( this_player()->query_skill("plan") / 15 < 37 - page )
//              return notify_fail("��򲻿���һҳ��\n");
        cat( sprintf(__DIR__"plan/plan-%d",page) );
        return 1;
}

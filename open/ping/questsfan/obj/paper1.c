inherit ITEM;
#include <ansi.h>
void create()
{
        set_name(HIW "飘阳的传说" NOR,({"story paper","paper"}));
        set("long","这是一张由秦厉害那买来的情报，你可以用(read)来观看。\n");
        set("unit","张");
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
       tell_object(me,"你左看右看就是看不懂这张的内容，看来要再去进修进修啰!!!\n");
       return 1;
}


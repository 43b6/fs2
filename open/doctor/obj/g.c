   #include <ansi.h>
   inherit F_AUTOLOAD;
   inherit ITEM;

   void create()
   {
       set_name(HIY"�����"NOR, ({"book_mark","mark"}));
       set("long","һ����ؾ��������!\n");
       set_weight(50);
       set("no_get",1);
       set("no_auc",1);
       set("no_give",1);
       set("no_put",1);
       set("no_sell",1);
       set("no_sac",1);
       set("no_drop",1);
       set("unit","��");
       setup();
   }  
   int query_autoload()
   {
       object me = this_player();

       if(me->query("start_quest") == 1)
           return 1;
           return 0;
   }

#include <ansi.h>
#define MASTER "suzukiami"
#define MOB_FILE __DIR__"pe-ca.c"
inherit ITEM;
string LONG_STRING="
�����ı�������ٻ��������Լ�������!!!
��ʹ��invocation���ٻ�!!\n";
void create()
{
    seteuid(getuid());
     set_name(HIY "���汦����" NOR,({"caller"}));
     set_weight(500);
    set("unit","��");
     set("long",LONG_STRING);
     set("no_sell",1);
     set("no_auc",1);
     set("no_drop",1);
     set("no_give",1);
     set("no_steal",1);
     set("no_put",1);
     set("light_up",-1);
     set("light",1);
     set("value",0);
     setup();

}
void init()
{
    add_action("do_test","invocation");
}
int do_test()
{
    object me=this_player();
    object mob;
    string name;
    string temp;

    if(!me) return 0;
    name=geteuid(me);
    if(name!=MASTER && !wizardp(me) && userp(me))
    {
      temp=sprintf("%s ���� %s ��caller ��%s\n",name,MASTER,ctime(time()));
      CBIP_D->record(temp,"/u/b/bss/record/caller");
      message_vision("$N����$n˵�����㲻���ҵ����ˣ��ҽ������ȥ!!\n",this_object(),me);
      destruct(this_object());
      return 1;
    }
    if(me->query_temp("marks/ascend"))
      return notify_fail("���Ѿ���һֻ�����ˣ�û��Ҫ���ٻ�����һֻ!!!\n");
    mob=new(MOB_FILE);
    mob->move(environment(me));
    mob->set("combat_exp",me->query("combat_exp"));
    mob->do_ascend(me);
    message_vision("�����ٻ����!!!\n",me);
    return 1;
}
int query_autoload()
{
    return 1;
}

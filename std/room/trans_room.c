#include <ansi.h>
inherit ROOM;

int set_trans(object ppl);
int ch_trans(string num,object me);
void setup()
{
    seteuid(getuid());
    set("trans_room",1);
    set("light_up",1);
    set("no_magic",1);
    set("no_kill",1);
    set("no_fight",1);
    set("no_transmit",1);
    if(!query("outdoors")) set("outdoors","/open/trans/room");
    set("long",query("long")+HIY"
在这里，你可以使用(transfer)指令前往你以前曾经去过的驿站!!\n\n"NOR);

    ::setup();
}
void init()
{
    string file_name,temp;
    string num;

    if(!query("sp_trans_room"))
    {
      file_name=base_name(environment(this_player()));
      if(!sscanf(file_name,"%s.c",temp)) file_name+=".c";
      if(!sscanf(file_name,"/open/trans/room/%s.c",num)) return ;
      if(!this_player()->query("trans/"+num))
        this_player()->set("trans/"+num,1);
    }
    add_action("do_trans","transfer");
}
int do_trans()
{
    int i,flag;
    string *room;
    string out,short,file_name,num;
    object me=this_player();

    if(!me) return 1;
    if(!me->query("trans"))
      return notify_fail("驿站无法为你服务!!\n");
    room=keys(me->query("trans"));
    out="可前往地点:\n";
    flag=0;
    for(i=0;i<sizeof(room);i++)
    {
      file_name="/open/trans/room/"+room[i]+".c";
      if(file_name==base_name(environment(this_player()))+".c") continue;
      flag=1;
      short=call_other(file_name,"query","short");
      num=room[i][4..sizeof(room[i])-1];
      out+=sprintf("[%2s]->%s\n",num,short);
    }
    if(flag)
    {
      out+="请输入欲前往的号码!!\n";
      write(out);
      input_to( (: ch_trans :),me);
    }
    else
    {
      out+="你必需先找到更多的驿站，才有办法前往!!\n";
      write(out);
    }
    return 1;
}
int ch_trans(string num,object me)
{
    string file_name,short;

    if(!num){
      tell_object(me,"你放弃前往!!\n");
      return 1;
    }
    if(!me->query("trans/room"+num)){
      tell_object(me,"没有这个地方!!\n");
      return 1;
    }
    file_name="/open/trans/room/room"+num+".c";
    short=call_other(file_name,"query","short");
    if(file_name==base_name(environment(me))+".c")
      return notify_fail("你已经在"+short+"了。\n");
    message_vision(HIY"$N骑上快马，往"+short+HIY+"狂奔而去。\n"NOR,me);
    me->move(file_name);
    message_vision(HIG"一阵急促的马蹄声传来，$N骑着一匹快马来到了"+short+HIG+"。\n"NOR,me);
    tell_object(me,"你下了马，马儿乖乖的往驿站后方走去!!\n");
    return 1;
}

#include <ansi.h>
inherit NPC;

void create()
{
  set_name("��ͯ", ({ "girl" }) );
  set("gender", "Ů��");
   set("age", 16);
   set("long",
      "��Ů����ר�Ÿ����չ˷�˵���ͯ��\n");

  set("combat_exp", 50000);
  set("chat_chance", 5);
  set("chat_msg", ({
     (: command, "say ÿ�춼Ҫ�չ���Щ��ˣ�����ม�" :),
     (: command, "smrik" :),
}) );

  setup();
}
int accept_fight(object me)
{
  command("sob");
  command("say ��... ��... ����ô�ɰ���������������ѽ... ��");
  return 0;
}
int accept_kill(object me)
{
  command("wa");
  command("say ��.....��..��һ��....��...����..������..ϧ����...��......");
  return 0;
}
void greeting(object ob)
{
  if( !ob || environment(ob) != environment() ) return;

  command("smile "+ob->query("id"));
  say(HIC"Ů������˵��"+ob->name()+HIC"����ӭ���������ɡ�\n"NOR);

}
void init()
{
     object me = this_player();
     if( me->query("Lbird-shop","YES")
|| me->query("family/family_name")=="������"
      || wizardp(me) ) {
     add_action("do_list", "list");
     add_action("do_shop", "shop");
     add_action("do_value", "value");
     add_action("do_sell", "sell");
     add_action("do_appraise","appraise");
     } else {
     add_action("no_trade", "list");
     add_action("no_trade", "shop");
     add_action("no_trade", "value");
     add_action("no_trade", "sell");
     add_action("no_trade", "appraise");
     }
}
int do_list(object me)
{
    write("\n\t�������(fire-phoenix)      - �ۼۣ�һ�����ӡ�\n"
          "\t���������(ice-phoenix)        - �ۼۣ�һ�����ӡ�\n"
          "\t���ٷ���(wind-phoenix)       - �ۼۣ�һ�����ӡ�\n"
          "\t��ɱ�׷��(lighting-phoenix)      - �ۼۣ�һ�����ӡ�\n"
          "\t����霷��(black-phoenix)      - �ۼۣ�һ�����ӡ�\n"
          "\t����(appraise)  �����ʺ���һ�����            \n\n");
return 1;
}
int do_appraise(object me)
{
me = this_player();
if(me->query("appraise")){
if(me->query("appraise") == 1)
write("���ʺϼ�����ˡ�\n");
if(me->query("appraise") == 2)
write("���ʺϼ�������ˡ�\n");
if(me->query("appraise") == 3)
write("���ʺϼ��ٷ��ˡ�\n");
if(me->query("appraise") == 4)
write("���ʺϼ�ɱ�׷�ˡ�\n");
if(me->query("appraise") == 5)
write("���ʺϼ���霷�ˡ�\n");
}else{
write("�㶼���ʺϣ����ɡ�\n");
}
return 1;
}
int do_shop(string str, object me)
{
    int lv;
    object goods;
    me = this_player();
    if( !str ) return notify_fail("[ָ���ʽ]��buy <id>\n");
    if((me->query("appraise") !=1 && str =="fire-phoenix") ||
       (me->query("appraise") !=2 && str =="ice-phoenix") ||
       (me->query("appraise") !=3 && str =="wind-phoenix") ||
       (me->query("appraise") !=4 && str =="lighting-phoenix") ||
       (me->query("appraise") !=5 && str =="black-phoenix"))return notify_fail("�㲢���ʺ����ַ�ˡ�\n");
    if( str == "fire-phoenix" || str == "ice-phoenix" || str == "wind-phoenix"
            || str == "lighting-phoenix" || str == "black-phoenix" ) {
    if( !me->can_afford(100) ) return notify_fail("������û���㹻�Ľ�Ǯ��\n");
    if( file_size("/open/marksman/obj/"+str+".c") < 0
    &&  !find_object("open/marksman/obj/"+str) )
    return command("say ��Ǹ�ۣ�"+me->name()+"�������͵ķ���ƺ�ȱ���С�\n");
    if( me->query("Lbird") ) {
    write("СŮ��˵:���Ѿ���һֻ��ˆ�!\n");
    } else {
    write(GRN"<"HIG"ǡ��"GRN">"HIC" �ʵ�"CYN"��"HIC
    "��ȷ��Ҫ����һֻ�µķ��"CYN"��"HIW"(Y/n)"NOR"��");
    input_to("new_Lbird", me, str);
    return 1;
    }
    } else command("say Sorry��"+me->name()+
    "������û�����ַ�ˣ������\(list)������ࡣ\n");
    return 1;
}
void new_Lbird(string yn, object me, string str)
{
     object Lbird = new("/open/marksman/obj/"+str);
     if( yn == "" || yn[0] == 'Y' || yn[0] == 'y' ) {
tell_room(environment(me),me->name()+"������һֻ��ˡ�\n");
     write(GRN"<"HIG"ǡ��"GRN">"HIC" ˵��"CYN"��"HIC
     "��ϲ��������һֻ���"CYN"��"HIC"��úõ��չ���"CYN"��\n"NOR);
     me->pay_money(100);
     Lbird->move(environment(me));
     Lbird->set("owner",me->query("id"));
     Lbird->set_leader(me);
     me->set("level",1);
     me->set_temp("come-sum","YES");
     me->set_mlist(str,1);
     me->set("Lbird",str);
     } else write(GRN"<"HIG"��������"GRN">"HIC" ˵��"CYN"��"HIC"�ð�"CYN"��"
     HIC"��ӭ�ٶȹ���"CYN"��\n"NOR);
     return;
}
int no_trade(string str, object me)
{
    me = this_player();
    command("say Sorry��"+me->name()+"���㲢û������ִ�ըۡ�\n");
    return 1;
}

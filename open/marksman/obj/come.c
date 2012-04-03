
inherit ITEM;
#include <ansi.h>

void create()
{
set_name(HIY"����"NOR,({ "come" }));
     set("long",
     "����һ�����Ƶ����ӣ��ɺ�����ķ�ˣ�����ʱ����(come-sum)\n"
     "��Ҫ���˻�ȥʱ��(go-way)��\n");
     set("no_sell",1);     set("no_auc",1);     set("unit","��");
     set("save_obj",1);    set("call-in-Lbird","YES");
     setup();
}
void init()
{
     add_action("do_summon", "come-sum");
     add_action("do_home", "go-way");
}
int do_summon(string str, object me)
{
    object Lbird, env;

    seteuid(getuid());     me = this_player();     env = environment(me);
    if( me->query_temp("come-sum") )
    return notify_fail(GRN"<"HIG"ǡ��"GRN">"HIC" ˵��"CYN"��"HIC"��ѽ"CYN
    "����"HIC"����̰��"CYN"��"HIC"�����Ѿ��ٳ���һֻ�������"CYN"��\n"NOR);
    if( !sizeof(me->query_mlists()) )
    return notify_fail(GRN"<"HIG"ǡ��"GRN">"HIC" ˵��"CYN"��"HIC"����"CYN
    "��"HIC"����һֻ���ﶼû��"CYN"��"HIC"���ο��ٻ����"CYN"��\n"NOR);
    if( !str ) return notify_fail(GRN"<"HIG"ǡ��"GRN">"HIC" ˵��"CYN"��"
    HIC"��Ҫ����˭��"CYN"��"HIC"��(mlist)��ѯ��ķ��"CYN"��\n"NOR);
    if( !me->query_mlist(str) )
    return notify_fail(GRN"<"HIG"���"GRN">"HIC" ˵��"CYN"��"HIC
    "�㲢û�������ַ�˰�"CYN"��\n"NOR);
    if( file_size("/open/marksman/obj/"+str+".c") < 0
    &&  !find_object("open/marksman/obj/"+str) )
    return notify_fail(GRN"<"HIG"ǡ��"GRN">"HIC" ˵��"CYN"��"HIC"��"CYN
    " ....."HIC"��Ȼ���ȷ������ֻ����"CYN"��"HIC"�������ַ�˺��������"
    CYN"��\n"HIC"�㻹�����������"CYN"��\n"NOR);
    Lbird = new("/open/marksman/obj/"+str);
    tell_room(env, HIY+me->name()+HIY"�����Ӵ���һ������"YEL"��"HIY
    "ֻ�����ͻȻ�ѳ�һ����"YEL"��"HIY"��һ������������˹���"YEL"����\n\n"NOR);
    if( me->is_fighting() ) me->start_busy(4); else me->start_busy(1);
    me->set_temp("come-sum","YES");
    Lbird->move(env);
    Lbird->set("level",me->query_mlist(str));
    Lbird->set("owner",me->query("id"));
    Lbird->set_leader(me);
    Lbird->set_skill("move",me->query_mlist(str));
    tell_room(env, HIY"ת�ۼ���Ʊ�ɫ"YEL"��"HIY"һֻ�ɰ���"
    +Lbird->name()+HIY"����������ǰ"YEL"��\n\n"NOR);
    write(GRN"<"HIG"ǡ��"GRN">"HIC" ˵��"CYN"��"HIC"�ɹ��ٳ����"CYN"��\n"HIW"Ok.\n"NOR);
    return 1;
}
int do_home(string str, object me)
{
    object Lbird, env;

    seteuid(getuid());
    me = this_player();
    env = environment(me);
    if( !str ) return notify_fail(GRN"<"HIG"ǡ��"GRN">"HIC" ˵��"CYN"��"
    HIC"��Ҫ��˭�ؼ���"CYN"��\n"NOR);
    if( !me->query_temp("come-sum") )
    return notify_fail(GRN"<"HIG"ǡ��"GRN">"HIC" ˵��"CYN"��"HIC
    "�㶼��û���ٳ������"CYN"��"HIC"Ҫ����������ؼ�"CYN"��\n"NOR);
    if( me->query_temp("is_rid") == "Lbird"
    &&  me->query_temp("rider/myself") )
    return notify_fail(GRN"<"HIG"ǡ��"GRN">"HIC" ˵��"CYN"��"HIC
    "�㻹������ķ���"CYN"��\n"NOR);
    if( !objectp(Lbird = present(str, env)) )
    return notify_fail(GRN"<"HIG"��������"GRN">"HIC" ˵��"CYN"��"HIC
    "��ķ�˲�����˵"CYN"����\n"NOR);
    if( Lbird->query("owner") != me->query("id") )
    return notify_fail(GRN"<"HIG"ǡ��"GRN">"HIC" ˵��"CYN"��"HIC
    "�ⲻ����ķ�˰�"CYN"��"HIC"ˬ����ѽ"CYN"��\n"NOR);
    me->delete_temp("come-sum");
    tell_room(env, HIG+me->name()+HIG"�����ĸ�"+Lbird->name()+HIG"˵��һЩ��"
    GRN"��"HIG"ֻ�����չ���������շ�ȥ��ת�ۼ䲻���ˡ�"GRN"��\n"NOR);
    destruct(Lbird);
    return 1;

}

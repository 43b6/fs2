// by Avgirl 05/20/00
#include <ansi.h>
inherit F_CLEAN_UP;
int help(object me);
int ally(object me,string clan);
int cally(object me,string clan);
int remove_accept(object me,object target);
int main(object me, string arg)
{
string clan;
if(this_player()->query("clan/rank")>3)
                return notify_fail("����Ȩʹ�����ָ��!!\n");
        if(!arg)
                return help(this_player());
        if(sscanf(arg,"-cancel %s",clan))
                return cally(this_player(),clan);
        if(sscanf(arg,"%s",clan))
                return ally(this_player(),clan);

        return 1;

}
int ally(object me,string clan)
{
string ally_s;
        string *ally,*allyy;
        object target;
object obj;
        int i;

        if(me->is_fighting() || me->is_ghost())
                return notify_fail("�ܱ�Ǹ,�����ڵ��������ʹ�����ָ�\n");
        if( !CLAN_D->have_clan( clan ) )
                return notify_fail("�޴˰��ɡ�\n");
// �ж���û��ͬ��...

        ally=CLAN_D->clan_query(me->query("clan/id"),"ally");
        for(i=0;i<sizeof(ally);i++){
                if(ally[i]==clan)
                                return notify_fail("���Ѿ�����ͬ����ѽ!!\n");
        }
        if( !target = find_player(CLAN_D->clan_query(clan, "master")))
                return notify_fail("�Է��İ�������,���޷��������Ҫ��\n");

        if(me->query_temp("ally/invite"))
                return notify_fail("���Ѿ�������,�ȶԷ���Ӧ�С�\n");
        else {
if(!me->query_temp("ally/accept")) {
// ��ʼ����....
        this_player()->set_temp("ally/invite",clan);
        target->set_temp("ally/accept",me->query("clan/id"));

        tell_object(target,GRN""+CLAN_D->clan_query(me->query("clan/id"),"name")+"��Ҫ�����Ϊ�˰\n"+
        "���ͬ��Ļ���� cally "+ target->query_temp("ally/accept")+"��\n"NOR);

        call_out("remove_accept",30,target,this_player());
        return 1;
        }
}
if(me->query_temp("ally/accept")!=clan)
                return notify_fail("��������������ͬ��,�粻ͬ�����Եȡ�
\n");
        else {
remove_call_out("remove_accept");
target->delete("ally");
me->delete("ally");
// ��Ӧ��....

// ��ʼ�趨..~~~~
        ally=CLAN_D->clan_query(me->query("clan/id"),"ally");
if(!ally) ally=({});
        if( pointerp(ally)) {
                ally += ({ clan });}
CLAN_D->clan_set(me->query("clan/id"),"ally",ally);

ally=({});
        ally=CLAN_D->clan_query(clan,"ally");
 if(!ally) ally=({});
ally_s=me->query("clan/id");
        if( pointerp(ally)) {
 ally += ({ ally_s });}
CLAN_D->clan_set(clan,"ally",ally);
// �����趨~~~
shout(
                HIY""+me->query("clan/name")+" ������ "
        +CLAN_D->clan_query(clan,"name")+" ͬ����,ϣ���ܴ����ǿʢ�İ���!!!\n"NOR);
        return 1;
        }
}
int remove_accept(object target,object me)
{
target->map_delete("ally");

me->map_delete("ally");

        tell_object(target,HIR""+me->query("clan/name")+"�Ѿ�����ͬ���ˡ�\n"NOR);
        write(HIR""+target->query("clan/name") + "û�л�Ӧ,������ͬ���ˡ�\n");
        return 1;
}

int cally(object me,string clan)
{
        string *ally,*allyy;
int tag;
        int i;

        if(me->is_fighting() || me->is_ghost())
                return notify_fail("�ܱ�Ǹ,�����ڵ��������ʹ�����ָ�\n");
        if( !CLAN_D->have_clan( clan ) )
                return notify_fail("�޴˰��ɡ�\n");
// ��߿�ʹ��ɾ�������ally....
        ally=CLAN_D->clan_query(me->query("clan/id"),"ally");
        for(i=0;i<sizeof(ally);i++){
if(ally[i]==clan) tag=1;
        }
if (!tag) return notify_fail("���ǲ�û�и���һ��ͬ��!!\n");
        if( pointerp(ally)) {
                ally -= ({ clan });}
        CLAN_D->clan_set(me->query("clan/id"),"ally",ally);


// ɾ���Է���...
        ally=CLAN_D->clan_query(clan,"ally");
        if( pointerp(ally)) {
                  ally -= ({ me->query("clan/name") });}
CLAN_D->clan_set(clan,"ally",ally);

shout(
                HIY"����һ�̿�ʼ, "+me->query("clan/name")+" ����ȡ���� "
        +CLAN_D->clan_query(clan,"name")+" ��ͬ����!!!\n"NOR);

        return 1;
}


int help( object me )
{
        write("
        c_ally <����Ӣ������>����ĳ��ͬ�ˡ�
        c_ally -cancel <����Ӣ������>����ĳ��ȡ��ͬ�ˡ�

                                        by avgirl 2000/05/20
");
        return 1;

}

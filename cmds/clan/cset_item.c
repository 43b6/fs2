// cset_item.c
//
//                                              Created by Chan

#define SAVE_ROOM       "������ csaveroom, ����˴ε��޸ġ�\n"
void done_setitem(string str, string text);

int main(object me, string arg)
{
        if( !CLAN_D->is_clan_room(me) )
                return notify_fail("������䲢�������ǰ��������ġ�\n");
        if( me->query("clan/rank") > 3)
                return notify_fail("����Ȩʹ�ô�ָ�\n");
        if( !arg )
                return notify_fail("ָ���ʽ��cset_item <���۵�Ӣ��>\n");
        me->edit( (: done_setitem,arg :) );
        return 1;
}

void done_setitem(string str,string text)
{
        mapping objs;
objs=environment(this_player())->query("item_desc");
if(!objs)  objs = ([ str : text ]);
else  objs += ([ str : text ]);
        environment(this_player())->set("item_desc", objs);
        write(SAVE_ROOM);
        return;
}

int help( object me )
{
        write(@HELP

��ʽ˵��:csetitem <����Ӣ��>

��ָ�������趨�����ھ��۵�����!!
����:
     csetitem board
     ��ʱ�ͻ�Ҫ������baord �ĳ�����!!!!
     ���֮��,���ڿ��Դ�look board ����Կ���board�еĳ�����!!!!

HELP    );
        return 1;
}




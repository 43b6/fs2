// csub_room.c
//
//                                              Created by Arthur

#define SAVE_ROOM       "������ csaveroom, ����˴ε��޸ġ�\n"

inherit F_CLEAN_UP;

int main(object me, string str)
{
        if( me->query("clan/rank") > 3)
                return notify_fail("����Ȩʹ�ô�ָ�\n");
        if( !CLAN_D->is_clan_room(me) )
                return notify_fail("������䲢�������ǰ��������ġ�\n");
        if( !environment(me)->query("item_desc/"+str))
        return notify_fail("û��������ۡ�\n");
         write("��ɾ�����ⷿ����["+str+"]�ľ���!!\n");
       environment(me)->delete("item_desc/"+str);
        write(SAVE_ROOM);
        return 1;
}
int help( object me )
{
        write("
    csub_item     ��ȡ�������趨��
    csub_item <����>

                                                         by ACKY 2000/02/23
");
        return 1;
}


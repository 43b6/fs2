//banmultid.c ban multi login by ACKY

#include <login.h>

int ban_multi( object ob )
{
        object *user;
        string ob_ip, ob_id, user_id, *special_ip;
	int i, max, number, sum;

	special_ip = ({
        "140.127.113.202",  //��Ӧ��(��ǰ�����׿�-��ר)
        "210.70.131.254",  //�󰲸߹�
        "163.23.234.30",  //���ݼ�Ժ
        "163.19.163.252", //���ϼ�Ժ
		});
	number = 0;
        user = users();
	ob_id = ob->query("id");
        ob_ip = query_ip_number( ob );

	if( ((time()+28800)%86400) > 28800 )
		max = MAX_MULTI_USUAL;
	else
		max = MAX_MULTI_UNUSUAL;

	if( member_array( ob_ip, special_ip )==-1 );
	else	max = MAX_MULTI_SPECIAL;

        sum = sizeof(user);
        for( i=0; i<sum; i++ ) {
        if(wizardp(user[i])) continue;
		user_id = user[i]->query("id");
		if( query_ip_number(user[i]) == ob_ip )
			if( !(""+SECURITY_D->get_status(user_id)=="(player)") )
				return 1;
			else if( user_id != ob_id )
				number++;
	}
	
        if( number >= max )
		return 0;
        else
                return 1;
}

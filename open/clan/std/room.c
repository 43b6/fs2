// clan room.c by ACKY

#define MAX_OBJ 10 // ���� MAX_OBJ ����Ʒ

int update_room( string file )
{
	object obj, *inv;
	int i, n;
	string *list;

	if( objectp( obj=find_object(file) ) ) {
		inv = all_inventory(obj);
		i = sizeof(inv);
		if( obj->query("objects") ) {
			list = keys( obj->query("objects") );
			while(i--)
				if( inv[i]->is_corpse() || inv[i]->query_autoload() )
					inv[i]->move( VOID_OB, 1 );
				else if( inv[i]->is_character() ) {
					if( member_array( base_name(inv[i]), list ) == -1 )
						inv[i]->move( VOID_OB, 1 );
					else
						destruct(inv[i]);
				}
				else
					destruct(inv[i]);
			destruct(obj);
		}
		else {
			while(i--)
				if( inv[i]->is_character() || inv[i]->is_corpse() || inv[i]->query_autoload() )
					inv[i]->move( VOID_OB, 1 );
				else
					destruct(inv[i]);
			destruct(obj);
		}
	}

	call_other( file, "???" );
	if( ( i=sizeof(inv) ) && ( obj=find_object(file) ) ) {
		while(i--)
			if( inv[i] && userp(inv[i]) ) inv[i]->move( obj, 1 );
	}
	return 1;
}

int update_keep( string file )
{
	object obj, *inv;
	int i, n;
	string *list;

	n = 0;
	if( objectp( obj=find_object(file) ) ) {
		inv = all_inventory(obj);
		i = sizeof(inv);
		if( obj->query("objects") ) {
			list = keys( obj->query("objects") );
			while(i--)
				if( inv[i]->is_corpse() || inv[i]->query_autoload() )
					inv[i]->move( VOID_OB, 1 );
				else if( inv[i]->is_character() ) {
					if( member_array( base_name(inv[i]), list ) == -1 )
						inv[i]->move( VOID_OB, 1 );
					else
						destruct(inv[i]);
				}
				else if( n++ < MAX_OBJ )
					inv[i]->move( VOID_OB, 1 );
				else
					destruct(inv[i]);
			destruct(obj);
		}
		else {
			while(i--)
				if( inv[i]->is_character() || inv[i]->is_corpse() || inv[i]->query_autoload() )
					inv[i]->move( VOID_OB, 1 );
				else if( n++ < MAX_OBJ )
					inv[i]->move( VOID_OB, 1 );
				else
					destruct(inv[i]);
			destruct(obj);
		}
	}

	call_other( file, "???" );
	if( ( i=sizeof(inv) ) && ( obj=find_object(file) ) ) {
		while(i--)
			if( inv[i] ) inv[i]->move( obj, 1 );
	}
	return 1;
}

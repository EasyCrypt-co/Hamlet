<?php

/*
 +-----------------------------------------------------------------------+
 | localization/<lang>/messages.inc                                      |
 |                                                                       |
 | Localization file of the Roundcube Webmail client                     |
 | Copyright (C) 2005-2015, The Roundcube Dev Team                       |
 |                                                                       |
 | Licensed under the GNU General Public License version 3 or            |
 | any later version with exceptions for skins & plugins.                |
 | See the README file for a full license statement.                     |
 |                                                                       |
 +-----------------------------------------------------------------------+

 For translation see https://www.transifex.com/projects/p/roundcube-webmail/resource/messages/
*/
$messages['errortitle']  = 'An error occured.';
$messages['loginfailed']  = 'Login failed.';
$messages['cookiesdisabled'] = 'Your browser does not accept cookies.';
$messages['sessionerror'] = 'Your session is invalid or has expired.';
$messages['storageerror'] = 'Connection to IMAP server failed.';
$messages['servererror'] = 'Server Error!';
$messages['servererrormsg'] = 'Server Error: $msg';
$messages['accountlocked'] = 'Too many failed login attempts. Try again later.';
$messages['connerror'] = 'Connection Error (Failed to reach the server)!';
$messages['dberror'] = 'Database Error!';
$messages['windowopenerror'] = 'The popup window was blocked!';
$messages['requesttimedout'] = 'Request timed out';
$messages['errorreadonly'] = 'Unable to perform operation. Folder is read-only.';
$messages['errornoperm'] = 'Unable to perform operation. Permission denied.';
$messages['erroroverquota'] = 'Unable to perform operation. No free disk space.';
$messages['erroroverquotadelete'] = 'No free disk space. Use SHIFT+DEL to delete a message.';
$messages['invalidrequest'] = 'Invalid request! No data was saved.';
$messages['invalidhost'] = 'Invalid server name.';
$messages['nomessagesfound'] = 'No messages found in this mailbox.';
$messages['loggedout'] = 'Session terminated. Good bye!';
$messages['mailboxempty'] = 'Mailbox is empty';
$messages['nomessages'] = 'No messages';
$messages['refreshing'] = 'Refreshing...';
$messages['loading'] = 'Loading...';
$messages['uploading'] = 'Uploading file...';
$messages['attaching'] = 'Attaching file...';
$messages['uploadingmany'] = 'Uploading files...';
$messages['loadingdata'] = 'Loading data...';
$messages['checkingmail'] = 'Checking for new messages...';
$messages['sendingmessage'] = 'Sending message...';
$messages['messagesent'] = 'Message sent';
$messages['savingmessage'] = 'Saving message...';
$messages['messagesaved'] = 'Message saved to Drafts.';
$messages['successfullysaved'] = 'Saved';
$messages['savingresponse'] = 'Saving response text...';
$messages['deleteresponseconfirm'] = 'Do you really want to delete this response text?';
$messages['addedsuccessfully'] = 'Contact added to address book.';
$messages['contactexists'] = 'A contact with the same email address already exists.';
$messages['contactnameexists'] = 'A contact with the same name already exists.';
$messages['blockedimages'] = 'For your safety, images are not displayed.';
$messages['encryptedmessage'] = 'This message is encrypted for another user, and cannot be decrypted by you.';
$messages['externalmessagedecryption'] = 'This is an encrypted message and can be decrypted with your browser extension.';
$messages['nopubkeyfor'] = 'No valid public key found for $email';
$messages['nopubkeyforsender'] = 'No valid public key found for your sender identity. Do you want to encrypt the message for the recipients only?';
$messages['encryptnoattachments'] = 'Already uploaded attachments cannot be encrypted. Please re-add them in the encryption editor.';
$messages['searchpubkeyservers'] = 'Do you want to search public key servers for the missing keys?';
$messages['encryptpubkeysfound'] = 'The following public keys have been found:';
$messages['keyservererror'] = 'Failed to get key from keyserver';
$messages['keyimportsuccess'] = 'Public key $key imported into your keyring';
$messages['nocontactsfound'] = 'No contacts found.';
$messages['contactnotfound'] = 'The requested contact was not found.';
$messages['contactsearchonly'] = 'Enter some search terms to find contacts';
$messages['sendingfailed'] = 'Failed to send message.';
$messages['senttooquickly'] = 'Please wait $sec sec(s). before sending this message.';
$messages['errorsavingsent'] = 'An error occurred while saving sent message.';
$messages['errorsaving'] = 'An error occurred while saving.';
$messages['errormoving'] = 'Could not move the message(s).';
$messages['errorcopying'] = 'Could not copy the message(s).';
$messages['errordeleting'] = 'Could not delete the message(s).';
$messages['errormarking'] = 'Could not mark the message(s).';
$messages['deletecontactconfirm']  = 'Do you really want to delete the selected contact(s)?';
$messages['deletegroupconfirm']  = 'Do you really want to delete the selected group?';
$messages['deletemessagesconfirm'] = 'Do you really want to delete the selected message(s)?';
$messages['deletefolderconfirm']  = 'Do you really want to delete this folder?';
$messages['purgefolderconfirm']  = 'Do you really want to delete all messages in this folder?';
$messages['contactdeleting'] = 'Deleting contact(s)...';
$messages['groupdeleting'] = 'Deleting group...';
$messages['folderdeleting'] = 'Deleting folder...';
$messages['foldermoving'] = 'Moving folder...';
$messages['foldersubscribing'] = 'Subscribing to folder...';
$messages['folderunsubscribing'] = 'Unsubscribing from folder...';
$messages['formincomplete'] = 'The form was not completely filled out.';
$messages['noemailwarning'] = 'Please enter a valid email address.';
$messages['nonamewarning']  = 'Please enter a name.';
$messages['nopagesizewarning'] = 'Please enter a page size.';
$messages['nosenderwarning'] = 'Please enter sender email address.';
$messages['norecipientwarning'] = 'Please enter at least one recipient.';
$messages['nosubjectwarning']  = 'The "Subject" field is empty. Would you like to enter one now?';
$messages['nobodywarning'] = 'Send this message without any text?';
$messages['notsentwarning'] = 'Your message has not been sent. Do you want to discard it?';
$messages['restoresavedcomposedata'] = 'A previously composed but unsent message was found.\n\nSubject: $subject\nSaved: $date\n\nDo you want to restore this message?';
$messages['noldapserver'] = 'Please select an LDAP server to search.';
$messages['nosearchname'] = 'Please enter a contact name or email address.';
$messages['notuploadedwarning'] = 'Not all attachments have been uploaded yet. Please wait or cancel the upload.';
$messages['searchsuccessful'] = '$nr messages found.';
$messages['contactsearchsuccessful'] = '$nr contacts found.';
$messages['searchnomatch'] = 'Search found no matches.';
$messages['searching'] = 'Searching...';
$messages['checking'] = 'Checking...';
$messages['stillsearching'] = 'Still searching...';
$messages['nospellerrors'] = 'No spelling errors found.';
$messages['folderdeleted'] = 'Folder deleted';
$messages['foldersubscribed'] = 'Subscribed to folder';
$messages['folderunsubscribed'] = 'Unsubscribed from folder.';
$messages['folderpurged'] = 'Folder emptied';
$messages['folderexpunged'] = 'Folder compacted';
$messages['deletedsuccessfully'] = 'Deleted';
$messages['converting'] = 'Removing formatting...';
$messages['messageopenerror'] = 'Could not load message from server.';
$messages['filelinkerror'] = 'Attaching the file failed.';
$messages['fileuploaderror'] = 'File upload failed.';
$messages['filesizeerror'] = 'The uploaded file exceeds the maximum size of $size.';
$messages['copysuccess'] = '$nr contacts copied';
$messages['movesuccess'] = '$nr contacts moved';
$messages['copyerror'] = 'Could not copy any contacts.';
$messages['moveerror'] = 'Could not move any contacts.';
$messages['sourceisreadonly'] = 'This address book is read-only.';
$messages['errorsavingcontact'] = 'Could not save the contact address.';
$messages['movingmessage'] = 'Moving message(s)...';
$messages['copyingmessage'] = 'Copying message(s)...';
$messages['copyingcontact'] = 'Copying contact(s)...';
$messages['movingcontact'] = 'Moving contact(s)...';
$messages['deletingmessage'] = 'Deleting message(s)...';
$messages['markingmessage'] = 'Marking message(s)...';
$messages['addingmember'] = 'Adding contact(s) to the group...';
$messages['removingmember'] = 'Removing contact(s) from the group...';
$messages['receiptsent'] = 'Read receipt sent';
$messages['errorsendingreceipt'] = 'Could not send the receipt.';
$messages['deleteidentityconfirm'] = 'Do you really want to delete this identity?';
$messages['nodeletelastidentity'] = 'You cannot delete this identity, it\'s your last one.';
$messages['forbiddencharacter'] = 'Folder name contains a forbidden character.';
$messages['selectimportfile'] = 'Please select a file to upload.';
$messages['addresswriterror'] = 'The selected address book is not writeable.';
$messages['contactaddedtogroup'] = 'Contacts added';
$messages['contactremovedfromgroup'] = 'Contacts removed';
$messages['nogroupassignmentschanged'] = 'No group assignments changed.';
$messages['importwait'] = 'Importing, please wait...';
$messages['importformaterror'] = 'Import failed! The uploaded file is not a valid import data file.';
$messages['importconfirm'] = '<b>$inserted contacts imported</b>';
$messages['importconfirmskipped'] = '<b>Skipped $skipped existing entries</b>';
$messages['importmessagesuccess'] = '$nr messages imported';
$messages['importmessageerror'] = 'Import failed! The uploaded file is not a valid message or mailbox file';
$messages['opnotpermitted'] = 'Operation not permitted!';
$messages['nofromaddress'] = 'Missing email address in selected identity.';
$messages['editorwarning'] = 'Switching editor type may cause text formatting to be lost. Do you wish to continue?';
$messages['httpreceivedencrypterror'] = 'A fatal configuration error occurred. Contact your administrator immediately. <b>Your message can not be sent.</b>';
$messages['smtpconnerror'] = 'SMTP Error ($code): Connection to server failed.';
$messages['smtpautherror'] = 'SMTP Error ($code): Authentication failed.';
$messages['smtpfromerror'] = 'SMTP Error ($code): Failed to set sender "$from" ($msg).';
$messages['smtptoerror'] = 'SMTP Error ($code): Failed to add recipient "$to" ($msg).';
$messages['smtprecipientserror'] = 'SMTP Error: Unable to parse recipients list.';
$messages['smtperror'] = 'SMTP Error: $msg';
$messages['emailformaterror'] = 'Invalid email address: $email';
$messages['toomanyrecipients'] = 'Too many recipients. Reduce the number of recipients to $max.';
$messages['maxgroupmembersreached'] = 'The number of group members exceeds the maximum of $max.';
$messages['internalerror'] = 'An internal error occurred. Please try again.';
$messages['contactdelerror'] = 'Could not delete contact(s).';
$messages['contactdeleted'] = 'Contact(s) deleted';
$messages['contactrestoreerror'] = 'Could not restore deleted contact(s).';
$messages['contactrestored'] = 'Contact(s) restored.';
$messages['groupdeleted'] = 'Group deleted';
$messages['grouprenamed'] = 'Group renamed';
$messages['groupcreated'] = 'Group created';
$messages['savedsearchdeleted'] = 'Saved search deleted';
$messages['savedsearchdeleteerror'] = 'Could not delete saved search.';
$messages['savedsearchcreated'] = 'Saved search created';
$messages['savedsearchcreateerror'] = 'Could not create saved search.';
$messages['messagedeleted'] = 'Message(s) deleted';
$messages['messagemoved'] = 'Message(s) moved';
$messages['messagemovedtotrash'] = 'Message(s) moved to the Rubbish Bin';
$messages['messagecopied'] = 'Message(s) copied';
$messages['messagemarked'] = 'Message(s) marked';
$messages['autocompletechars'] = 'Enter at least $min characters for autocompletion.';
$messages['autocompletemore'] = 'More matching entries found. Please type more characters.';
$messages['namecannotbeempty'] = 'Name cannot be empty.';
$messages['nametoolong'] = 'Name is too long.';
$messages['namedotforbidden'] = 'Folder name cannot start with a dot.';
$messages['folderupdated'] = 'Folder updated';
$messages['foldercreated'] = 'Folder created';
$messages['invalidimageformat'] = 'Not a valid image format.';
$messages['mispellingsfound'] = 'Spelling errors detected in the message.';
$messages['parentnotwritable'] = 'Unable to create/move folder into selected parent folder. No access rights.';
$messages['messagetoobig'] = 'The message part is too big to process it.';
$messages['attachmentvalidationerror'] = 'WARNING! This attachment is suspicious because its type doesn\'t match the type declared in the message. If you do not trust the sender, you shouldn\'t open it in the browser because it may contain malicious contents.<br/><br/><em>Expected: $expected; found: $detected</em>';
$messages['noscriptwarning'] = 'Warning: This webmail service requires Javascript! In order to use it please enable Javascript in your browser\'s settings.';
$messages['messageissent'] = 'The message was already sent, but not yet saved. Do you want to save it now?';
$messages['errnotfound'] = 'File Not Found';
$messages['errnotfoundexplain'] = 'The requested resource was not found!';
$messages['errfailedrequest'] = 'Failed request';
$messages['errauthorizationfailed'] = 'Authorisation Failed';
$messages['errunauthorizedexplain'] = 'Could not verify that you are authorised to access this service!';
$messages['errrequestcheckfailed'] = 'Request Check Failed';
$messages['errcsrfprotectionexplain'] = "For your protection, access to this resource is secured against CSRF.\nIf you see this, you probably didn't log out before leaving the web application.\n\nHuman interaction is now required to continue.";
$messages['errcontactserveradmin'] = 'Please contact your server administrator.';
$messages['clicktoresumesession'] = 'Click here to resume your previous session';
$messages['errcomposesession'] = 'Compose session error';
$messages['errcomposesessionexplain'] = 'Requested compose session not found.';
$messages['clicktocompose'] = 'Click here to compose a new message';

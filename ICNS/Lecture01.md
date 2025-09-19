## The CIA Triad
 The CIA triad is essential because it allows for achieving security.

- Confidentiality:
	- Prevent unauthorized discolosure of information
	- Permit authorized sharing of information
- Integrity
	- Prevent unauthorized modification of information
	- Permit authorized modification of indormation
- Availability
	- Prevent unauthorized withholding of information or services
	- Readily permit authorized access to indormation or services
### Confidentiality 
Confidentiality is the property that sensitive information is not disclosed to unauthorized individuals, entities, or properties. It covers data in storage, during processing and while in transit. Unauthorized access could be intentional or unintentional, and disclosing sensitive data has substantial impact on privacy. Data encryption and access control are services that help to guarantee confidentiality. 
### Integrity 
Integrity means ensuring the authenticity of information, meaning that information is not altered, and that the source of the information is genuine (Authenticity). It also gives protection against an individual falsely denying having performed a particular action (Non-repudiation for auditability). This property can be compromised both through human errors and attacks, and violating it has an impact on the trustworthiness of resources and services available online. Implementing version control and audit trails are ways to allow an organization to guarantee that its data is accurate and authentic. 
### Availability
Availability is a requirement intended to assure that systems work promptly and service is not denied to authorized users. It can be violated because of infrastructure failures or overloads, power outages or attacks such as DDoS or ransomware. Violating availability means loss of money for a company or even a country, and could mean censorship. Employing a backup system and a recovery plan, and utilizing cloud solutions for data storage are essential for maintaining availability.
### Orthogonality of the CIA properties
The CIA dimensions are not orthogonal, one cannot address one without taking in considerations the otehr two, they are dependent of each other. This entanglement is what makes security inherently complex, the lack of modularity makes standard engeneering problem-solving methods ineffective.
### Security policies
A security policy is the set of rules and requirements established by an organization that governs the acceptable use of its information and services, and the level and means for protecting the confidentiality, integrity and availability of its information. A security policy has a purpose and a scope. An example of purpose is protecting confidential or sensitive data from loss in order to avoid reputation damage and to avoid impacting customers; the scope of this policy are all the employees, contractors and individuals with access to that company’s systems or data.
You can think of them as a set of rules that is declarative and guarantees the CIA principles. They characterize what the CIA triad means in one particular scenario. 
Their declarative nature makes them a high-level aspect of security.
### Security mechanisms
Security mechanisms are the implementation of a security policy. They are devices or functions designed to provide one or more security services usually rated in terms of strength of service and assurance of design. Authentication, authorization and access control are a few examples.
### Security services
Security services are security capabilities or functions provided by an entity that support one or more security objectives. They’re composed of security mechanisms and are typically easier to set up and configure. One example is the TLS protocol, which uses a range of cryptographic primitives to guarantee confidentiality and integrity as the security mechanism.
### Audit Log (digression on access control)
Logging is very important for assessing what happened after an attack.
The integrity of the audit log has utter most importance, very few users can access it, and for forensics purposes only legal enforcing agencies can access the log. Fedelity to reality is key.
### Vulnerability
A vulnerability is a weakness in a system, application, or network that is subject to exploitation or misuse. They can be characterized by how easy it is to identify them and exploit them. One of the most common examples of vulnerabilities are weak passwords, which allow people to break into systems; this could mean gaining access to data they’re not supposed to read, breaking confidentiality, gaining the ability to tamper with the data, breaking integrity, or being able to shut down or suspend activities on the system, breaking availability. 
### Threat
A threat is any activity, deliberate or unintentional, with the potential for causing harm to an automated information system or activity. They can be characterized as a combination of the propensity to attack and the ability to successfully attack. Viruses are a common threat; they’re self-replicating programs that require user action to activate, such as interacting with an email or downloading infected files. 
### Attack
An attack is any kind of malicious activity that attempts to disrupt, deny, degrade or destroy information system resources or the information itself. It’s the realization of some specific threat that impacts the confidentiality, integrity, availability or the accountability of a computational resource.
### Risk
Risk is a function of two variables:
$$
\text{Risk} = \text{Likelihood} \times \text{Impact}
$$
It is impossible to have a perfectly secure system, the point of security is to minimize this risk function.
Bugs cause vulnerabilities and hackers are always looking for soft spots. When a bug becomes a vulenrability, a strategy for an attack can be developed.
Impact is evaluated with respect to each stakeholder, while the likelihood is given by the threats and the vulnerabilities that they would exploit. Threats are characterized as a combination of the propensity to attack and the ability to successfully attack. Vulnerabilities are characterized by how easy it is to identify and exploit them.
```merm
stateDiagram-v2
    Threat --> Vulnerability: Exploits
    Vulnerability --> Risk: Leads to
    Risk --> Mitigation: Resolved by
    Mitigation --> Threat: Affects
```
### Threat Model
A threat model is a structured representation of all the information that affects the security of an application. It usually includes a description of the system to be modelled, assumptions that can be checked/challenged in the future as the threat landscape changes, potential threats to the system, controls that can be taken to mitigate each threat and a way of validating the model and threats, and verification of success of controls taken. 
### Risk matrix
The risk matrix is a matrix used in risk assessment to define the level of risk. The impact and likelihood of an attack are divided into a set of discrete intervals, which will help is assigning a value to the level of risk of a particular scenario.
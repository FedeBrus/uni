### Risk
Risk is a function of two variables:
$$
\text{Risk} = f(\text{Likelihood}, \text{Impact})
$$
Again, it is impossible to have a perfectly secure system, the point of security is to minimize this risk function.
Bugs cause vulnerabilities and hackers are always looking for soft spots. When a bug becomes a vulenrability, a strategy for an attack can be developed.
### Orthogonality
The CIA dimensions are not orthogonal, one cannot address one without taking in considerations the otehr two, they are dependent of each other.
This entanglement is what makes security inherently complex, the lack of modularity makes standard engeneering problem-solving methods uneffective.
### Security policies
You can think of them as a set of rules that are declarative, they guarantee the CIA principles. They characterize what the CIA means in a particular scenario. 
Their declarative nature makes them a high-level aspect of security.
### Security Mechanisms
Mechanisms are used to enforce the rules declared by the security policy. They of course depend on the security policy that needs to be enforced. So there is no set of mechanisms that can enforce every possible security policy and not every security policy can be enforced.
### Audit Log
Logging is very important for assessing what happened after an attack.
The integrity of the audit log has utter most importance, very few users can access it, and for forensics purposes only legal enforcing agencies can access the log. Fedelity to reality is key.
